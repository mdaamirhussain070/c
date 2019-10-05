// LCM
#include<Stdio.h>
int main()
{
	int n1,n2,x,y;
	
	printf("Enter two number \n");
	scanf("%d%d",&n1,&n2);
	x=n1;
	y=n2;
	
	while(x!=y)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}
	printf("number -1= %d  number -2= %d  ,LCM =%d",n1,n2,n1*n2/x);
	
	
return 0;
}