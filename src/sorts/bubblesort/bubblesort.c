/**
 * @file bubblesort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-07
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/**
 * @brief Sort array using Bubblesort algorythm 
 * 
 * @param tab Array to sort
 * @param size Size of the array
 * @param ascending 1 if ascending, 0 if descending
 */
void bubblesort(float *tab,int size,int ascending){
    for(int i = 0; i < size -1;i++){
        for(int j = 0; j < size-i-1;j++){
            if(ascending ^ (tab[j] < tab[j+1])){
                float temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
    return *tab;
}