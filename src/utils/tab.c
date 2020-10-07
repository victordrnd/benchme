void displayTab(float *tab, int size){
for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tab[i]);
	}
	printf("\n");
}


void mockArray(float *tab,int size,int seed){
	srand(seed);
	for (int i = 0; i < 100; i++)
	{
		tab[i] =  (float) (rand() % 50);
	}
}