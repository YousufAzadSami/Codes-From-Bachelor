#include<stdio.h>

int main()
{
	short int fib[10000];
	int i,n,a,b;

	while(1)
	{

		scanf("%d %d %d",&a,&b,&n);
		if(a==0 && b==0 && n==0)
			break;

		fib[0]=1;
		fib[1]=1;
	
		for(i=2;i<n;i++)
		{
			fib[i]=(a*fib[i-1]+b*fib[i-2])%7;
		}

//	for(i=0;i<n;i++)
			printf("%hd\n",fib[n-1]);

	}

	return 0;
}