#include<stdio.h>

int main()
{
	int a,b,c,n;
	a=1,b=1;
printf("Enter number of term\n");
scanf("%d",&n);
printf("Term of series is::: %d  %d  ",a,b);
for(int i=1;i<=n;i++)
{
	c=a+b;
	printf("  %d",c);
	a=b;
	b=c;
}

return 0;
}