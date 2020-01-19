#include<stdio.h>

void main()
{
	__int64 i,n,n1,n2,n3;

	scanf("%d",&n);

	n1=0;
	n2=1;

	printf("0\t1");

	for(i=3;i<=n;i++)
	{
	
		n3=n1+n2;

		n1=n2;
		n2=n3;

		printf("\t%d",n3);
	}

	printf("\n\n\n");
}