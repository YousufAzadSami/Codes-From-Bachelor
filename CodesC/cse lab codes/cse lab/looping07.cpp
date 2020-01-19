#include<stdio.h>

void main()
{
	int i,n,n1,n2,n3=0;

	scanf("%d",&n);

	n1=1;
	n2=1;

	printf("1\t1");

	for(i=3;i<=n;i++)
	{
	
		n3=n1+n2;

		n1=n2;
		n2=n3;

		printf("\t%d",n3);
	}

	printf("\n\n\n");
}