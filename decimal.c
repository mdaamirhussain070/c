#include<stdio.h>


void main()
{
	int rem,num,dec=0,base=1;
	printf("Enter binary number");

	scanf("%d",&num);
		
		while(num>0)
		{
			rem=num%10;
			
			dec=dec+rem*base;
			
			num=num/10;
			
			base=base*2;
		}
		printf("%d",dec);
}