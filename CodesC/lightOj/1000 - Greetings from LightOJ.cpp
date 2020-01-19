#include<stdio.h>

int main()
{
	int a,b,testCase;

	scanf("%d",&testCase);

	for(int i=1;i<=testCase;i++)
	{
		scanf("%d %d",&a,&b);

		printf("Case %d: %d\n",i,a+b);
	}

	return 0;
}