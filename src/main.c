#include <stdio.h>
#include "utils/tab.h"
#include "sorts/bubblesort/bubblesort.h"
#include "sorts/insertionsort/insertionsort.h"

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





