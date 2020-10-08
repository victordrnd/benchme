/**
 * @file heapsort.h
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */

void heapSort(float *tab, int size, int ascending);

void create(float *tab, int ascending);

void down_adjust(float *tab,int i, int ascending);