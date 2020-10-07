#include <stdio.h>
#include "selectionsort.h"

int main()
{
	float tab[100];
	for (int i = 0; i < 100; i++)
	{
		float rd=(float)(rand()% 100);
		tab[i] = rd;
		//printf("%.01f ", tab[i]);
	}
	
	selectionsort(tab, 100);

	for (int i = 0; i < 100; i++)
	{
		printf("%.01f ", tab[i]);
	}
	
	printf("\n");

	return (0);
}