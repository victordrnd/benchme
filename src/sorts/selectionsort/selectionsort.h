/**
 * @brief  Sort array using selection sort
 * @param  tab Array of float to sort 
 * @param  size: Size of the array to sort 
 * @param  ascending : 1 if ascending 0 descending
 */
void selectionsort(float *tab, int size, int ascending);


/**
 * @brief Test insertion sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_selection(int *seeds, int nb_of_tests,float *results);