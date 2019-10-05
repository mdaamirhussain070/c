#include<stdio.h>
int main()
{

FILE *fp;
int i,no;

fp=fopen("aamir.txt","r");

fclose(fp);

return 0;
}