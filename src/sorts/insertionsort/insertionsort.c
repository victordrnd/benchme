/**
 * @file insertionsort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <time.h>

/**
 * @brief Sort an array using insertion sort
 * 
 * @param tab array of float
 * @param size size of the array
 * @param ascending 1 if ascending 0 if descending
 */
void insertionsort(float *tab, int size, int ascending)
{
    int j;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        while (j >= 0 && (tab[j] > tab[i]) ^ ascending)
        {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = tab[i];
    }
}

/**
 * @brief Test insertion sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_insertion(int *seeds, int nb_of_tests,float *results)
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
        mockArray(tab6, 1000000, seeds[i]);
        mockArray(tab7, 10000000, seeds[i]);
        t1 = clock();
        insertionsort(tab2, 100, 0);
        insertionsort(tab3, 1000, 0);
        insertionsort(tab4, 10000, 0);
        insertionsort(tab5, 100000, 0);
        insertionsort(tab6, 1000000, 0);
        insertionsort(tab7, 10000000, 0);
        t2 = clock();
        results[i]=(float)(t2-t1) / (float) CLOCKS_PER_SEC;
    }
}
