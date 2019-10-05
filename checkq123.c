#include<stdio.h>
int main()
{
    int x=1, y=1;
    for(; y; printf("  loop %d %d\n", x, y))
	{
		printf(" inside loop %d %d\n ",x,y);
        y = x++ <= 5;
		printf(" first inrition %d %d\n",x,y);
    }
    printf("\n");
    return 0;
}