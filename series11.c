/* find the term in the series
0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8

this series contain to series

0,2,4,6,8,10,12,14,16,....
0,1,2,3,4,5,6,7,8......

odd plae is start fro zero and incresing 2

even place is start fom zero and incresing 1

*/

#include<stdli.h>
int main()
{
	int a=0,b=o,n,i;
	
	printf("Enter the term \n");
	scanf("%d",&n);
	printf("%d,%d,",a,b);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			a=a+2;
			printf("%d,",a);
		}
		else
		{
			b=b+2;
		printf("%d,",b);
		}
	}	
	
return 0;	
}