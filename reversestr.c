#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[20],str2[20];
	char a;
	int j=0;
	printf("%d\n",sizeof(a));
	printf("Enter string\n");
	scanf("%s",str);
	printf("%d\n",sizeof(str));
//	gets(str);
	int len=strlen(str);
	printf("%d,%d\n",len,sizeof(str));
	for(int i=len-1;i>=0;i--)
	{
		str2[j]=str[i];
		printf("%c",str[i]);
		j++;

	}
	int len2=strlen(str2);
	
	str2[len2+1]='\0';
	printf("\n");
	printf("%s\n",str2);
	int i=0;
	j=0;
	for(j=0;j<strlen(str2);j++)
	{
		if(str[j]==str2[i])
		{
			i++;
		}
		else
			break;

	}
	printf("%d\n",i);
	if(i==len)
	{
		printf("palindrom");
	}
	else
	{
		printf("not palindrom");
	}
return 0;
}