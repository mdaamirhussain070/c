#include<stdio.h>
#include<math.h>
int DecToBinary(int base,int num);

int main()
{
	int n,base,result;
	printf("Enter number in decimal\n");
	scanf("%d",&n);
	
	printf("Enter base 2 for binary  8 octal\n");
	scanf("%d",&base);
	
	result=DecToBinary(base,n);
	
	printf("number =%d ----base=%d-----result=%d  \n",n,base,result);
	
	
return 0;
	
}
  /* Description of Decimal to binary conversion 
   4/2= 2 r 0
   2/2= 2 r 0
   1/2= 0 r 1
	
	1*100 + 0*10 + 0*1
	
	1*10^2 + 0*10^1 +0*10^0
	
	*/
int DecToBinary(int base,int num)
{
	
	int i=0;
	int remainder=0;
	int quitent=num;
	int newNum=0;
	
	while(quitent!=0)
	{
		remainder=quitent%base;
		quitent=quitent/base;
		newNum=newNum+remainder * pow(10,i);
		i++;
		
	}
	
	
	
	
	return newNum;
}
	
