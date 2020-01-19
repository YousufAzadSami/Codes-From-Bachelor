#include<stdio.h>

struct data
{
	int age;
	int salary;
	char str[100];
};

struct data array[100];

void main()
{
	char ch;
	int i=0,total;

	while(1)
	{	
		printf("Do you want to enter data?(y/n)");
		scanf("%c", &ch);
		getchar();

		if(ch=='n') break;

		printf("Enter name   : ");
		gets(array[i].str);

		printf("Enter age    : ");
		scanf("%d", &array[i].age);

		printf("Enter salary : ");
		scanf("%d", &array[i].salary);

		getchar();

		i++;
	}

	total=i;

	printf("You have entered \n\n");

	for(i=0;i<total;i++)
	{
		printf("Name   : ");
		puts(array[i].str);
		printf("Age    : %d\n", array[i].age);
		printf("salary : %d\n\n", array[i].salary);
	}
}