#include<stdio.h>

void main()
{
	int a,a1,a2,a3,a4,a5,rev_a;
	printf("enter ur 5 digit number:");
	scanf("%d",&a);
	
	a1=a%10;
	a=a/10;

	a2=a%10;
	a=a/10;

	a3=a%10;
	a=a/10;

	a4=a%10;

	a5=a/10;

	rev_a=a5*1+a4*10+a3*100+a2*1000+a1*10000;

	printf("%d\n\n",a1+a2+a3+a4+a5);

	
}
