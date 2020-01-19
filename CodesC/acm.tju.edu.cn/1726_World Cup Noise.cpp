#include<stdio.h>

long unsigned int fib(unsigned long int m);



int main()
{
	
	int n,ii,i;
	unsigned long int ans;

	scanf("%d",&ii);

	for(i=1;i<=ii;i++)
	{
		scanf("%d",&n);

		ans=fib(n);

		printf("Scenario #:%d\n%lu\n",i,ans);
	}





	return 0;
}


long unsigned int fib(unsigned long int m)
{
	if(m==1)
		return 2;
	else if(m==2)
		return 3;
	else
		return fib(m-1)+fib(m-2);
}