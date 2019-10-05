#include<stdio.h>
#include<string.h>
#include<math.h>
void binary(int,int);
void octal(int,int);
void decimal(int,int);
void hex(int base,int temp);
int main()
{
	int num,temp,base,result=0;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("Base to which want to conver the number\n");
	scanf("%d",&base);
	temp=num;
	
	if(base==2)
	{
		binary(base,temp);
	}
	else if(base==8)
	{
		octal(base,temp);
	}
	else if(base==16)
	{
	//	printf("calling hex function\n");
		hex(base,temp);
	}
	else if(base==10)
	{
		decimal(base,num);
	}
	else
		printf("Enter base 2 or 8 or  16\n try again\n");

	return 0;
}


void hex(int base,int temp1)
{
		char hex[20];
		int temp,rem,i=0;
		temp=temp1;
//		printf("hex fun");
		
		while(temp>0)
		{
			rem=temp%16;
			if(rem>9)
			{
				hex[i]=(char)(rem+55);
			}
			else
			{
				hex[i]=(char)(rem+48);
			}
			
			temp=temp/16;
			i++;
		
		}
//		printf("%d",i);
		hex[i]='\0';
		strrev(hex);
		printf(" number in decimal=%d\n",temp1);
		printf("number in hexadecimal=%s",hex);
}
	
void octal(int base,int temp)
{
	int temp1,rem,result=0,i=0;
	temp1=temp;
	
	while(temp1>0)
	{
		rem=temp1%8;
		result=result+rem*pow(10,i);
		temp1=temp1/8;
		i++;
	}
	printf("number =%d--------octal number=%d",temp,result);

		
}

void binary(int base,int temp)
{
	int rem,temp1,result=0,i=0;
	temp1=temp;
	while(temp1>0)
	{
		rem=temp1%2;
		result=result+rem*pow(10,i);
		temp1=temp1/2;
		i++;
		
	}
	printf("number =%d-------binary number=%d",temp,result);
}	
	
	
void decimal(int base,int temp)
{
	int rem,temp1,result=0,i=0;
	temp1=temp;
	while(temp1>0)
	{
		rem=temp1%base;
		result=result+rem*pow(2,i);
		temp1=temp1/base;
		i++;
		
	}
	printf("number =%d-------binary number=%d",temp,result);
}	
	
