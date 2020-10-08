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
#include "utils/file/file.h"

int main(int argc, char *argv[])
{
	int seeds[3] = {9, 34, 56};
	float results_insertion[18];
	float results_bubble[18];
	float results_selection[18];
	printf("Running insertion sort test...\n");
	test_insertion(seeds, 3, results_insertion);
	printf("Running selection sort test...\n");
	test_selection(seeds, 3, results_selection);
	printf("Running bubble sort test...\n");
	test_bubble(seeds, 3, results_bubble);

	export_results(argv[1], results_bubble, "Bubble sort");
	export_results(argv[1], results_insertion, "Insertion sort");
	export_results(argv[1], results_bubble, "Selection sort");
	return (0);
}
