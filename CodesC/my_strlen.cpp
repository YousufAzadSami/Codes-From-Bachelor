#include<stdio.h>

int length(char *s)
{
	char *p=s;

	while(*p!='\0')
	{
		p++;
	}

	return p-s;
}

void main()
{
	char str[100];

	gets(str);

	printf("%d\n", length(str));
}