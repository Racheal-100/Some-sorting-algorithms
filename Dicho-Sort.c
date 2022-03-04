// dichotomous sorting algorithm
#include<stdio.h>
#define N 5

int dicho_sort(int *T, int item, int i, int j)
{
	int mid;
	   mid=(i+j)/2;
	   
	   if(j<=i)
	  {
	   if(item>T[i])
	   i++; i;
	   return i;
	  }
	   
	   if(item==T[mid])
	     T[mid]=item;
	     
	    if(item<T[mid])
		return dicho_sort(T,item,i,mid-1);
		
		if(item>T[mid])
		return dicho_sort(T,item,mid+1,j); 
}

int main(){
	
	int arr[N+1],i,j,num,pos;
	
	printf("Enter values of array: ");
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<N;i++)
	{
		j=i-1;
		num=arr[i];
		pos=dicho_sort(arr,num,0,j);
		
		while(arr[j]>=arr[pos])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=num;
	}
	printf("The sorted elements are: ");
	
	for(i=0;i<N;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	return 0;
}
