/**
 * @file insertionsort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */



/**
 * @brief Sort an array using insertion sort
 * 
 * @param tab array of float
 * @param size size of the array
 * @param ascending 1 if ascending 0 if descending
 */
void insertionsort(float *tab, int size, int ascending){
    int j;
    for(int i = 1;i<size;i++){
        j=i-1;
        while(j>=0 && (tab[j] > tab[i]) ^ ascending){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = tab[i];
    }
}