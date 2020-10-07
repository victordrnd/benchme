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