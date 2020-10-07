
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