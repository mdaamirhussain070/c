#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n,base,result,i=0;
	char h[15];
	base=16;
	int temp,reminder;
	printf("Enter number in decimal\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		reminder=temp%16;
		
		if(reminder>9)
			h[i]=(char)reminder+55;
		
		else
			h[i]=(char)reminder+48;
		
		i++;
		
		temp=temp/16;
	}
	h[i]='\0';

		
		strrev(h);
		
		
	
	
	
	
	printf("number =%d ----base=%d   result=%s",n,base,h);
	
	
	return 0;
}