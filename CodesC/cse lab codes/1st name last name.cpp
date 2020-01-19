#include<stdio.h>
#include<string.h>

void main()
{
	int len,i,j;
	char str[100];

	// enter input
	printf("enter ur name:");
	
	gets(str);
	
	len=strlen(str);

	for(i=len;i>=0;i--)
	{
		if(str[i]==32)
			break;
	}

	j=len-i;

	for(i=len-1;i>=0;i--)
	{
		str[i+j]=str[i];
	}

	str[j-1]=' ';
	
	for(i=len+j-1;i>len-1;j--,i--)
	{
		str[j-2]=str[i];
	}

	str[len]='\0';

	puts(str);
}