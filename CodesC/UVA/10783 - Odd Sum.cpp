#include<stdio.h>

int even(int i,int j)
{
	int x,sum=0;

	for(x=i+1;x<=j;x=x+2)
		sum=sum+x;

		return sum;
}

int odd(int i, int j)
{
	int x,sum=0;

	for(x=i;x<=j;x=x+2)
		sum=sum+x;

	return sum;
}

int main()
{
	int n,a,b,testCase,result;

	scanf("%d",&n);

	for(testCase=1;testCase<=n;testCase++)
	{
		scanf("%d %d",&a,&b);
		
		if(a%2==0)
			result=even(a,b);
		else
			result=odd(a,b);

		printf("Case %d: %d\n",testCase,result);
	}

	return 0;
}