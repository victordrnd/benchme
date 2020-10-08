/**
 * @file main.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @brief 
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include "sorts/bubblesort/bubblesort.h"
#include "sorts/insertionsort/insertionsort.h"
#include "sorts/selectionsort/selectionsort.h"
#include "sorts/heapsort/heapsort.h"

/**
 * @brief  Entry point
 * @param  argc: 
 * @param  argv[]: 
 * @retval 
 */
int main(int argc, char *argv[])
{
	int seeds[3] = {9, 34, 56};
	float results_insertion[18];
	float results_bubble[18];
	float results_selection[18];
	float results_heap[18];
	printf("Running insertion sort test...\n");
	test_insertion(seeds, 3, results_insertion);
	printf("\nRunning selection sort test...\n");
	test_selection(seeds, 3, results_selection);
	printf("\nRunning bubble sort test...\n");
	test_bubble(seeds, 3, results_bubble);
	printf("\nRunning heap sort test...\n");
	test_heapsort(seeds, 3, results_heap);
	if (argv[1])
	{
	printf("\n%s\n", "Exporting results...");
		export_results(argv[1], results_bubble, "Bubble sort");
		export_results(argv[1], results_insertion, "Insertion sort");
		export_results(argv[1], results_selection, "Selection sort");
		export_results(argv[1], results_heap, "Heap sort");
	}

	printf("%s\n", "Success");
	return (0);
}
