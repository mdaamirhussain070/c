#include<stdio.h>
#include<stdlib.h>
#define max 100
void main()
{
	int i,arr[max],n;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array data\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array data before rotation\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	int j,k=0,temp,d;
	printf("Enter number of rotaton\n");
	scanf("%d",&d);
	
	while(k<d)
	{
		temp=arr[0];
		printf("arr[n-1]= %d\n",arr[n-1]);
		for(j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
			printf("%d\n",arr[j]);
		}
		arr[n-1]=temp;
		printf("k = %d\n",k);
		k++;
		
	}
	printf("Array after rotation\n");
//	printf("Enter array data\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}
		
