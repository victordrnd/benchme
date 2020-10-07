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
void test1()
{
	float tab2[100];
	float tab3[1000];
	float tab4[10000];
	float tab5[100000];
	float tab6[1000000];
	float *tab7 = malloc(sizeof(float) * 10000000);
	mockArray(tab2, 100, 0x400);
	mockArray(tab3, 1000, 0x400);
	mockArray(tab4, 10000, 0x400);
	mockArray(tab5, 100000, 0x400);
	mockArray(tab6, 1000000, 0x400);
	mockArray(tab7, 10000000, 0x400);
	printf("\n");
	insertionsort(tab2, 100, 0);
	insertionsort(tab3, 1000, 0);
	insertionsort(tab4, 10000, 0);
	insertionsort(tab5, 100000, 0);
	insertionsort(tab6, 1000000, 0);
	insertionsort(tab7, 10000000, 0);
}
int main()
{
	float tmp = execution_time(test1);
	printf("temps = %fs", tmp);
	//bubblesort(tab, 100, 0);
	//displayTab(tab, 100);

	return (0);
}
