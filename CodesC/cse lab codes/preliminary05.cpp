#include<stdio.h>
void main()
{
	double a,aa;

	printf("enter your basic salary:");
	scanf("%lf",&a);

	aa=a+a*30/100+a*5/100+1000;

	printf("%lf",aa);
}