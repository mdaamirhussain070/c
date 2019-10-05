#include<stdio.h>
#include<math.h>


int main()
{
	int num,reminder,temp,n=0,result=0;
	
	printf("enter number\n");
	scanf("%d",&num);
	temp=num;
	
	while(temp!=0)
	{
		temp=temp/10;
		n++;
	}
	temp=num;
	while(temp!=0)
	{
		reminder=temp%10;
		
		result=result+ pow(reminder,n);
		temp=temp/10;
	}
	printf("%d\n",result);
	
	if(result==num)
		printf("number is armstrong");
	else
		printf("noot armstrong");
	return 0;
}