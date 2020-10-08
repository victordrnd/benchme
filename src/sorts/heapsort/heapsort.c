/**
 * @file heapsort.c
 * @author Victor DURAND & Léo Albouy (contact@victordurand.fr)
 * @version 0.1
 * @date 2020-10-08
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#define ASCENDING 1
#define DESCENDING 0

void heapSort(float *tab, int size, int ascending)
{
	create(tab, ascending);
	float temp;
    int last;

	while(tab[0] > 1)
	{
		last=tab[0];
		temp=tab[1];
		tab[1]=tab[last];
		tab[last]=temp;
		tab[0]--;
		down_adjust(tab,1, ascending);
	}
}
 
void create(float *tab, int ascending)
{
	int i,n;
	n=tab[0];
	for(i=n/2;i>=1;i--)
		down_adjust(tab, i, ascending);
}
 
void down_adjust(float *tab,int i, int ascending)
{
	int j,temp,n,flag=1;
	n=tab[0];
	
	while(2*i<=n && flag==1)
	{
		j=2*i;
		if((j+1<=n && tab[j+1] > tab[j]) ^ ascending)
			j=j+1;
		if(tab[i] > tab[j])
			flag=0;
		else
		{
			temp=tab[i];
			tab[i]=tab[j];
			tab[j]=temp;
			i=j;
		}
	}
}
