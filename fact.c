#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
//int main(int argc, char *argv[])
{
	
	
	if(argc==0)
	{
		printf("Enter Argument\n");	

	}
	long fact=1,i,n;
	 n = atoi(argv[1]);
//	n = atoi(argv[1]);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	printf("num= %d   fact= %d",n,fact);

return 0;
}