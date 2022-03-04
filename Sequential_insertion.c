//sequential insertion algorithm
#include<stdio.h>
#define N 5

int main()
{
	int i,k,x,m;
	int arr[N+1];
	
	printf("enter the values of array: ");
	for(m=0;m<N;m++)
	{
		scanf("%d",&arr[m]);
	}
	
	for(i=1;i<N;i++){
		k=i-1; x=arr[i];
		
		 while((arr[k]>x)&&(k>=0)){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=x;
	}
	
	printf("The sorted elements are: ");
	
	for(m=0;m<N;m++){
		printf("%d, ",arr[m]);
	}
	
	return 0;
}
