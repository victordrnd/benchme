/**
 * @file selectionsort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "../../utils/tab/tab.h"

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
 * @brief Test selection sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_selection(int *seeds, int nb_of_tests,float *results)
{
    test_sort(seeds, nb_of_tests, results, selectionsort);
}