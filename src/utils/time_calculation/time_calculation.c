/**
 * @file time_calculation.c
 * @author Victor Durand (contact@victordurand.fr)
 * @brief 
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <time.h>


/**
 * @brief Calculate execution time of a function
 * 
 * @param funct function to calculate execution time 
 * @return float execution time
 */
float execution_time(void (*funct)(float*,int, int),float *tab,int size, int ascending ){
    clock_t t1, t2;
	float temps;
    t1 = clock();
    (*funct)(tab, size, ascending);
    t2 = clock();
	temps = (float) (t2-t1) * 1e-6;
    printf("t = %fs\n", (float) (t2-t1) * 1e-6);
    return temps;
}