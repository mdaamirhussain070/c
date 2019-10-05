#include<stdio.h>


void main()
{
	int rem,num,dec=0,base=1;
	printf("Enter binary number");

	scanf("%d",&num);
		
		while(num>0)
		{
			rem=num%2;
			
			dec=dec+rem*base;
			
			num=num/2;
			
			base=base*10;
		}
		printf("%d",dec);
}