#include<stdio.h>

func_fact(int a)
{
	int total=1,i;

	for(i=1;i<=a;i++)
	{
		total=total*i;
	}

	return total;
}

void main()
{
	int n,fact;

	printf("Enter your integer number:");
	scanf("%d",&n);

	fact=func_fact(n);

	printf("\nThe factorial of the given number is:%d\n\n\n",fact);
}