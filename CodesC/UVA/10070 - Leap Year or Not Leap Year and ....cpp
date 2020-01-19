#include<stdio.h>

int main()
{
	int year,flag,counter;

	while((scanf("%d",&year)) != EOF)
	{
		flag=counter=0;

		if(year%4==0 && year%400==0 && year%100 !=0)
			printf("This is leap year.\n"), counter++,flag=1;

		if(year%15==0)
			printf("This is huluculu festival year.\n"),	counter++;

		if(year%55==0)
		{
			if(flag!=1)
				printf("This is leap year.\n");

			printf("This is bulukulu festival year.\n"),	counter++;
		}

		if(counter==0)
			printf("This is an ordinary year.\n");

		printf("\n");

		
	}

	return 0;
}