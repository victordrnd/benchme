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
#include "utils/tab/tab.h"
#include "utils/time_calculation/time_calculation.h"

int main()
{
	int seeds[3] = {9, 34, 56};
	float results_insertion[3];
	float results_bubble[3];
	test_insertion(seeds, 3, results_insertion);
	//test_bubble(seeds, 1, results_bubble);
	printf("temps insertion = %fs\n", results_insertion[0]);
	printf("temps tri bulle = %fs\n", results_bubble[0]);
	FILE *fichier1 = fopen("fichier1", "w");
	fprintf(fichier1,"temps insertion = %fs",results_insertion[0]);
	fclose(fichier1);
	return (0);
}
