#include<stdio.h>

int main()
{
	char str[300];
	int i;

	while(gets(str) != NULL)
	{
		i=0;

		while(str[i] != NULL)
		{
			printf("%c",str[i]-7);
			i++;
		}

		printf("\n");

	}
	return 0;
}