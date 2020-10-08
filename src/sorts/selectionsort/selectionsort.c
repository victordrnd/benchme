/**
 * @file selectionsort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#define ASCENDING 1
#define DESCENDING 0
/**
 * @brief  Sort array using selection sort
 * @param  tab Array of float to sort 
 * @param  size: Size of the array to sort 
 * @param  ascending : 1 if ascending 0 descending
 */
void selectionsort(float *tab, int size, int ascending)
{
    int i, j, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
            if (ascending ^ tab[j] < tab[min])
                min = j;

        float temp = tab[min];
        tab[min] = tab[i];
        tab[i] = temp;
    }
}


/**
 * @brief Test insertion sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_selection(int *seeds, int nb_of_tests,float *results)
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
            results[i*6 + j] = execution_time(selectionsort, addresses[j], sizes[j], ASCENDING);
        }
    }

    for(int i=0; i< 6 ;i++){
        float val = results[i] + results[i+6] + results[i+12];
        results[i] = (float) (val/ (float) nb_of_tests);
    }
    
}