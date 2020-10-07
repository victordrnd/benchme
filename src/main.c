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
#include "utils/tab.h"
#include "sorts/bubblesort/bubblesort.h"
#include "sorts/insertionsort/insertionsort.h"


/**
 * @brief Program entry
 * 
 * @return int 
 */
int main()
{
	float tab[100];
	mockArray(tab, 100, 0x400);
	printf("\n");
	insertionsort(tab, 100, 0);
	//bubblesort(tab, 100, 0);
	displayTab(tab, 100);
	
	return (0);
}





