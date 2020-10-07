#include <stdio.h>
#include "sorts/bubblesort/bubblesort.h"

int main()
{
	float tab[100];
	for (int i = 0; i < 100; i++)
	{
		tab[i] =  (float) (rand() % 20);
	}
	printf("\n");

	bubblesort(tab, 100, 0);
	displayTab(tab, 100);
	
	return (0);
}


void displayTab(float *tab, int size){
for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tab[i]);
	}
	printf("\n");
}



