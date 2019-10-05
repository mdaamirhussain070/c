#include<stdio.h>
#include<string.h>

int main()
{
	char a[10],b[10],c[10];
	int i;
	int x,y,z;
	gets(a);
	gets(b);
	gets(c);
	x=strlen(a);
	y=strlen(b);
	z=strlen(c);
	
	for(int i=0;i<x;i++)
	{
		
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			a[i]='%';
		}
	}
	for(int j=0;j<y;j++)
	{
		if(b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u')
		{

		}
		else
		{
			b[j]='#';
		}
		
	}
	for(int k=0;k<z;k++)
	{
		if(c[k]>='a' && c[k]<='z')
		{
			c[k]=c[k]-32;
		}
	}
	printf("%s %s %s",a,b,c);

return 0;
}