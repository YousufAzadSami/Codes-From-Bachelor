#include<stdio.h>

int main()
{
	printf("Enter your password:");

	while(1)
	{
		gets(pass);
		if(pass=="password")
			break;
	}

	while(1)
	{
		menu();
	}
}

void menu()
{
	printf("\t\t\t\t::MENU::\v\v\t\t\t\t::PRESS::\n\n\t\t");
	printf("'s' for menu\n\t\t");
	printf("'w' for ");
}