/**
 * @file bubblesort.h
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */


/**
 * @brief Sort an array using bubblesort algorythm
 * 
 * @param tab Array of float to sort
 * @param size Size of the array
 * @param ascending 1 if ascending, 0 if descending
 */
void bubblesort(float *tab,int size,int ascending);



/**
 * @brief Test bubble sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Momery address of an empty array of float, will contain each execution time for every test 
 */
void test_bubble(int *seeds, int nb_of_tests,float *results);