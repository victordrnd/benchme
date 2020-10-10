#include "../time_calculation/time_calculation.h"

#define ASCENDING 1
#define DESCENDING 0

/**
 * @brief Display all cells in an array
 * 
 * @param tab Array of float to display
 * @param size Size of the array
 */
void displayTab(float *tab, int size){
for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tab[i]);
	}
	printf("\n");
}

/**
 * @brief Fills an array with random float
 * 
 * @param tab Arr
 * @param size 
 * @param seed 
 */
void mockArray(float *tab,int size,int seed){
	srand(seed);
	for (int i = 0; i < size-1; i++)
	{
		tab[i] =  (float) (rand() % 1000000);
	}
}

/**
 * @brief Test insertion sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_sort(int *seeds, int nb_of_tests,float *results, void (*funct)(float*,int, int))
{
    float tab2[100];
    float tab3[1000];
    float tab4[10000];
    float tab5[100000];
    float tab6[1000000];
    float *tab7 = malloc(sizeof(float) * 10000000);

    int sizes[6] = {100, 1000, 10000, 100000, 0, 0};
    float *addresses[6] = {tab2, tab3,tab4,tab5,tab6,tab7};
    for (int i = 0; i < nb_of_tests; i++)
    {
        for(int j = 0;j<6;j++){
            mockArray(addresses[j], sizes[j],seeds[i]);
            results[i*6 + j] = execution_time(funct, addresses[j], sizes[j], ASCENDING);
            // printf("Execution time : %0.6f \n", results[i*6 + j]);
        }
    }

    for(int i=0; i< 6 ;i++){
        float val = results[i] + results[i+6] + results[i+12];
        results[i] = (float) (val/ (float) nb_of_tests);
    }
    
}