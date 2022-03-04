// Algorithm: Simple Selection sort 
#include<stdio.h>
#define MAX 5
void selection_sort(int *T,int i,int j)
{
	int k, max,pos, tem;
	
	for(k=j;k>=i;k--){
		
		max=i;
		
		for(pos=i;pos<=k;pos++){
			if(T[pos]>T[max])
			{ max=pos;
			 }
			tem=T[max];
			T[max]=T[k];
			T[k]=tem;
		}
	}
}

int main()
{
	int size=MAX;
	int array[size], i=0;
	
    printf("The size of the array is %d",size);
	
	printf("\n Pls enter the values of the array:\n");
	
	for(i=0;i<(size-1);i++)
	{
		printf("elmt[%d]= ",i);
		scanf("%d",&array[i]);
		
	}
	
	selection_sort(array,0,size-1);
	
	printf("The sorted list is: ");
	
	for(i=0;i<(size-1);i++)
	{
		printf("%d ,",array[i]);
	}
	
	return 0;
}
