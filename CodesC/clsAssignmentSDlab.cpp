// write something to a file and then copy it to another
//roll: 11.01.04.096

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100], *p, ch ;
	FILE *filePointer1, *filePointer2;

	filePointer1=fopen("sourceFile" , "w");
	if(filePointer1 == NULL)
	{
		printf("problem occured opennig file 'sourceFile'...\n");
		exit(1);
	}

	printf("Please enter your desired string for the file 'sourceFile' below:\n");
	gets(str);
	p=str;

	while(*p)
	{
		fputc(*p, filePointer1);
		p++;
	}

	printf("souceFile is closing now...\n");

	fclose(filePointer1);


	filePointer1=fopen("sourceFile" , "r");
	if(filePointer1 == NULL)
	{
		printf("problem occured opennig file 'sourceFile'...\n");
		exit(1);
	}

	filePointer2=fopen("destinationFile" , "w");
	if(filePointer2 == NULL)
	{
		printf("problem occured openning file 'destinationFile'...\n");
		exit(1);
	}


	/*printf("Please enter your desired string for the file 'sourceFile' below:\n");
	gets(str);
	p=str;

	while(*p)
	{
		filePointerutc(*p, filePointer1);
		p++;
	}*/

	printf("the copying process will begin now!\n");


	while((ch=fgetc(filePointer1)) != EOF)
	{
		fputc(ch,filePointer2);
	}



	return 0;
}