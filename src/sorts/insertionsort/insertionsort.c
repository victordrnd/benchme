/**
 * @file insertionsort.c
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
      float temp = tab[i];
      j = i - 1;
      while ((temp < tab[j]) ^ ascending && j >= 0)
      {
            tab[j + 1] = tab[j];
            j = j - 1;
      }
      tab[j + 1] = temp;
   }
}

/**
 * @brief Test insertion sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_insertion(int *seeds, int nb_of_tests, float *results)
{
   test_sort(seeds, nb_of_tests, results, insertionsort);
}
