#include<stdio.h>
void leapyear(int year)
{
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("year = %d is a laep year",year);
			}
			else
			{
				printf(" year= %d is Not a leap year",year);
			}
		}
		else
		{
			printf("year = %d is a leap year",year);
		}
	}
	else
	{
		printf("year = %d  is Not a leap year",year);
	}
	
}
int main()
{
	int year;
	printf("Enter Year\n");
	scanf("%d",&year);
	leapyear(year);
	return 0;
}