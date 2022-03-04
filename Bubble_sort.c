//Bubble sort algorithm
#include<stdio.h>
#define N 5 //size of array

int main()
{
	int i,j,val,m;
	int arr[N+1];
	
	printf("enter the values of array: ");
	
	for(m=0;m<N;m++)
	{
		scanf("%d",&arr[m]);
	}
	
	i=N-1;
	
	do
	{
		
		for(j=1;j<=i;j++){
			if(arr[j]<arr[j-1]){
				val = arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=val;
			}
		}
		i=i-1;
	} while(i>=0);
	
	printf("The arranged elements are: ");
	for(m=0;m<N;m++)
	{
		printf("%d, ",arr[m]);
	}
	return 0;
}
