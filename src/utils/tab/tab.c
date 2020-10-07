
/**
 * @brief Display all cells in an array
 * 
 * @param tab Array of float to display
 * @param size Size of the array
 */
void displayTab(float *tab, int size){
for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tab[i]);
	}
	printf("\n");
}

/**
 * @brief Fills an array with random float
 * 
 * @param tab Arr
 * @param size 
 * @param seed 
 */
void mockArray(float *tab,int size,int seed){
	srand(seed);
	for (int i = 0; i < size-1; i++)
	{
		tab[i] =  (float) (rand() % 50);
	}
}