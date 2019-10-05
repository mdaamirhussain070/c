#include<stdio.h>

int main()
{
	 int num,rem,result=0,temp;
	printf("Enter number\n");
	scanf("%d",&num);
	temp=num;
//	printf("%d",temp);
	while(temp>0)
	{
		rem=temp%10;
		
		result=result*10+rem;
		temp=temp/10;
	}
	printf("number=%d----result=%d\n",num,result);
	if(num==result)
		printf("number is palindrom");
	else
		printf("not palindrom");
	
	return 0;
}