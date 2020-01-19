#include<stdio.h>

int main()
{
	int sum=0,i,n;

	scanf("%d",&n);

	if(n>1)
	{
		for(i=1;i<=n;i++)
			sum=sum+i;
	}

	else
	{
		for(i=1;i>=n;i--)
			sum=sum+i;
	}

	printf("%d\n",sum);

	return 0;
}