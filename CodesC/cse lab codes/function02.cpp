#include<stdio.h>

power(int x,y)
{
	int i,tot=1;
	
	for(i=1;i<=b;i++)
	{
		tot=tot*x;
	}

	return tot;
}

void main()
{
	int a,b,tot;
	scanf("%d",&a);
	scanf("%d",&b);

	tot=power(a,b);

	printf("a raised to b=%d\n\n\n",tot);
}