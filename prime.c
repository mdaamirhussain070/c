#include<stdio.h>
int main()
{
	int n;
	int flage=0;
	printf("Enter number to check for prime");
	scanf("%d",&n);
	int temp=n;
	
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flage=1;
		}
	}
	if(flage==0)
	{
		printf("Number =%d     is prime",temp);
	}
	else
		printf("number %d    is not prime",temp);

return 0;
}