/**
 * @file heapsort.c
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

void siftDown(int *tab, int i, int size, int ascending);

/**
 * @brief  Heap sort algorithm
 * @param  tab: Array to sort 
 * @param  size: Size of the array to sort
 * @param  ascending: ASCENDING or DESCENDING
 */
void heapsort(int *tab, int size, int ascending)
{
	for (int i = size / 2; i >= 0; i--)
	{
		siftDown(tab, i, size, ascending);
	}

	while (size - 1 > 0)
	{
		float temp = tab[size - 1];
		tab[size - 1] = tab[0];
		tab[0] = temp;
		siftDown(tab, 0, size - 1, ascending);
		size--;
	}
}

/**
 * @brief  
 * @param  tab: Array to sort 
 * @param  size: Size of the array to sort
 * @param  ascending: 1 if ascending 0 if descending
 */
void siftDown(int *tab, int i, int size, int ascending)
{
	while (i * 2 + 1 < size)
	{
		int child = 2 * i + 1;
		if ((child + 1 < size) && (tab[child] < tab[child + 1]))
			child++;
		if ((tab[i] < tab[child]) ^ ascending)
		{
			float temp = tab[child];
			tab[child] = tab[i];
			tab[i] = temp;
			i = child;
		}
		else
			return;
	}
}

/**
 * @brief Test heapsort sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_heapsort(int *seeds, int nb_of_tests,float *results)
{
    test_sort(seeds, nb_of_tests, results, heapsort);
}
