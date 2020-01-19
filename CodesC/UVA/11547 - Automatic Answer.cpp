#include<stdio.h>



int main()
{
	int testCase,n,ans,finalResult,i;

	scanf("%d",&testCase);

	for(i=1; i<=testCase; i++)
	{
		scanf("%d",&n);

		ans= ((((((n*567)/9)+7492)*235)/47)-498);

		//printf("%d  ",ans);

		//ans=ans/10;

		if(ans<0)
			ans=ans*-1;

		finalResult = ((ans/10) % 10);

		printf("%d\n", finalResult );
	}


	return 0;
}