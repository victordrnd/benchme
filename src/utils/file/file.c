
#include <stdio.h>
/**
 * @brief  Generate output file
 * @note   
 * @param  filename: filename output name 
 * @param  values:  
 */
void export_results(char *filename, float *values, char *algorithm_name)
{
	int sizes[6] = {100, 1000, 10000, 100000, 0, 0};
	FILE *fichier = fopen(filename, "a+");

	fseek(fichier, 0, SEEK_END);
	int size = ftell(fichier);

	if (0 == size)
	{
		fprintf(fichier, "%s\n", "Algorithme name, Array size, Execution Time");
		for (int i = 0; i < 6; i++)
		{
			fprintf(fichier, "%s, %d, %f\n", algorithm_name, sizes[i], values[i]);
		}
	}
	else
	{
		for (int i = 0; i < 6; i++)
		{
			fprintf(fichier, "%s, %d, %f\n", algorithm_name, sizes[i], values[i]);
		}
	}
	fclose(fichier);
}