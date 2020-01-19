#include<stdio.h>
#include<string.h>

int total[300];

void main()
{
	int i;
	int len ;
	int total[300];
	char str[100];

	printf("input : ");
	gets(str);

	len = strlen(str);

	for(i=0;i<=255;i++) total[i]=0;

	for(i=0;i<len;i++)
	{
		total[str[i]]++;
	}

	for(i=0;i<=255;i++)
	{
		if(total[i]!=0) printf("%c %d\n", i,total[i]);
	}

	getchar();
}
