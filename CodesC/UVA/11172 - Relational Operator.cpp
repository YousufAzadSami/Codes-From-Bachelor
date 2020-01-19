#include<stdio.h>

int main()
{
	int testCase,a,b;

	scanf("%d",&testCase);

	for(int i=1;i<=testCase;i++)
	{
		scanf("%d %d",&a,&b);

		if(a>b)
			printf(">");
		else if(b>a)
			printf("<");
		else 
			printf("=");

		printf("\n");
	}

	return 0;
}