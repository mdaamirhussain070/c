#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define max 100

int main(int argc,char *argv[])
{
	int i=0,count=0;
	char x[max];
//	printf("Start");

	x=atoi(argv[1]);
	
	while(x[i]!='\0')
	{
		i++;
//		printf("%c",x[i]);
		count++;
	}
	printf("%d",count);
	getch();
 return 0;
}