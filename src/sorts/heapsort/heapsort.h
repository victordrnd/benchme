/**
 * @file heapsort.h
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */


#include "../../utils/tab/tab.h"
#define ASCENDING 1
#define DESCENDING 0


/**
 * @brief  swap two float
 * @note   
 * @param  *a: 
 * @param  *b: 
 * @retval None
 */
void swap(float *a, float *b);


/**
 * @brief Heapify and array
 * 
 * @param arr 
 * @param n 
 * @param i 
 * @param ascending 
 */
void heapify(float *arr, int n, int i, int ascending);


/**
 * @brief  
 * @note   
 * @param  *tab: 
 * @param  size: 
 * @param  ascending: 
 * @retval None
 */
void heapsort(float *tab, int size, int ascending);



/**
 * @brief Test heapsort sort execution time
 * 
 * @param seeds Seeds for every test, need to be exactly the size of nb_of_tests
 * @param nb_of_tests Number of test to perform
 * @param results Memory address of an empty array of float, will contain each execution time for every test 
 */
void test_heapsort(int *seeds, int nb_of_tests,float *results);