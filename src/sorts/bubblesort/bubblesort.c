/**
 * @file bubblesort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */


#include <time.h>


/**
 * @brief Sort array using Bubblesort algorythm 
 * 
 * @param tab Array to sort
 * @param size Size of the array
 * @param ascending 1 if ascending, 0 if descending
 */
void bubblesort(float *tab,int size,int ascending){
    for(int i = 0; i < size -1;i++){
        for(int j = 0; j < size-i-1;j++){
            if(ascending ^ (tab[j] < tab[j+1])){
                float temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}


/**
 * @brief Test bubble sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Momery address of an empty array of float, will contain each execution time for every test 
 */
void test_bubble(int *seeds, int nb_of_tests,float *results)
{
    float tab2[100];
    float tab3[1000];
    float tab4[10000];
    float tab5[100000];
    float tab6[1000000];
    float *tab7 = malloc(sizeof(float) * 10000000);

    clock_t t1, t2;
    for (int i = 0; i < nb_of_tests; i++)
    {
        mockArray(tab2, 100, seeds[i]);
        mockArray(tab3, 1000, seeds[i]);
        mockArray(tab4, 10000, seeds[i]);
        mockArray(tab5, 100000, seeds[i]);
        //mockArray(tab6, 1000000, seeds[i]);
        //mockArray(tab7, 10000000, seeds[i]);
        t1 = clock();
        bubblesort(tab2, 100, 0);
        bubblesort(tab3, 1000, 0);
        bubblesort(tab4, 10000, 0);
        bubblesort(tab5, 100000, 0);
        //bubblesort(tab6, 1000000, 0);
        //bubblesort(tab7, 10000000, 0);
        t2 = clock();
        results[i]=(float)(t2-t1) / (float) CLOCKS_PER_SEC;
    }
}