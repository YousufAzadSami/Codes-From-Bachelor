#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100];
	FILE *fp;
	char *p;
	int i;

	if((fp = fopen("myfile", "w")) == NULL)
	{
		printf("cannot open file.\n");
		exit(1);
	}

	
	printf("Pls enter your string for file .....\n");
	gets(str);
	p = str;


	while(*p)
	{
		if(fputc(*p , fp) == EOF )
		{
			printf("Error writing file.\n");
			exit(1);
		}
		(p)++;
	}

	fclose(fp);

	if((fp = fopen("myfile" , "r")) == NULL)
	{
		printf("cannot open file");
	}

	for( ; ; )
	{
		i = fgetc(fp);
		if(i == EOF)	break;
		putchar(i);
	}

	fclose(fp);

	return 0; 

}