#include<stdio.h>
void main()

{
	int year,a;
	printf("enter the year number:");
	scanf("%d",&year);

	a=(year-1900)*365+(year/4);		

	printf("the first day of the year %d will be :::",year);


	 if(a%7==0)
		printf("Tuesday");

	else if(a%7==1)
		printf("Wednesday");

	else if(a%7==2)
		printf("Thursdsay");

	else if(a%7==3)
		printf("Friday");
	
	else if(a%7==4)
		printf("Staurday");

	else if(a%7==5)
		printf("Sunday");

	else 
		printf("Monday");
}