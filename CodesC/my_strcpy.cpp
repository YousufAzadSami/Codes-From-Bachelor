#include<stdio.h>

void copy(char *t,char *s)
{
	char *src=s,*targ;

	while(*src != '\0')
	{
		
		*targ = *src;
		printf("%c ", *targ);
		targ++;
		src++;
	}

	*targ='\0';
}

int main()
{
	char str1[100],str2[100];

	gets(str1);

	copy(str2,str1);

	puts(str2);

	return 0;
}