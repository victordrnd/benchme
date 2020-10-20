/**
 * @file heapsort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "heapsort.h"

void swap(float *a, float *b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}


void heapify(float *arr, int n, int i, int ascending)
{
	int largest = i;
	int left = (i << 1) + 1;
	int right = (i << 1) + 2;

	if (left < n && (arr[left] > arr[largest]) ^ !ascending)
		largest = left;

	if (right < n && (arr[right] > arr[largest]) ^ !ascending)
		largest = right;

	//while root is not max
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest, ascending);
	}
}


/**
 * @brief  Heap sort algorithm
 * @param  tab: Array to sort 
 * @param  size: Size of the array to sort
 * @param  ascending: ASCENDING or DESCENDING
 */
void heapsort(float *tab, int size, int ascending)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(tab, size, i, ascending);
	for (int i = size - 1; i >= 0; i--)
	{
		swap(&tab[0], &tab[i]);
		heapify(tab, i, 0,ascending);
	}
}


/**
 * @brief Test heapsort sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_heapsort(int *seeds, int nb_of_tests, float *results)
{
	test_sort(seeds, nb_of_tests, results, heapsort);
}
