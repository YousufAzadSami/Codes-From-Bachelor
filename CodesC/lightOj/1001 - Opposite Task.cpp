#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,n,testCase;

	scanf("%d ",&testCase);

//	randomize();

	for(int i=1; i<=testCase; i++)
	{
		scanf("%d",&n);

		a=rand() % 10 ;

		while(a>n)
		{
			a=rand() % 10 ;

			if(a<n)
				break;
		}

		printf("%d %d\n",a,n-a);
	}

	return 0;
}