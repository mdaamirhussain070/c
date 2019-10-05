#include<stdio.h>


void main()
{
	int dec,binary=0,rem;
	printf("Enter number \n");
	scanf("%d",&dec);
	int temp=dec,i;
	int binary_num[32];
	while(dec>0)
	{
		binary_num[i]=dec%2;
		dec=dec/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",binary_num[j]);
	}
}