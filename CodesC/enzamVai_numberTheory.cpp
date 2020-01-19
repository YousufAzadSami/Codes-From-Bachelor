/*
Problem Statement:
You are given N (0 < N < 10^4) chocolates. But unfortunately you are not allowed to eat all of them. Do you ask why? Because it will not be good for your teeth (or is it a myth?) and of course sharing is a good thing :). Now you can only choose S (0 < S < N) of them. Now you are confused, eh? How will you choose your chocolate? So you want to find out (or I am forcing you to find out) how many ways you can choose your chocolates. But there is a problem though. The answer can be very large. So I will give you another number P (0 < P < 1001) you should return number of ways modulo P-th prime.

Input Specification:
First line will be T (T < 5, the number of test cases).
Each of the next T lines will contain 3 integers : N, S and P.

Output Specification:
For each test case, output a line containing the test case number and the answer. For exact format see the sample output.
*/



#include<stdio.h>

__int64 fac(int num)
{
	int i;
	__int64 product=1;

	for(i=num;i>1;i--)
	{
		product=product*i;
	}

	return product;
}

int main()
{
	int test,i,n,s,p,m,nn,x=0,flag;
	int prime[1000];
	__int64 factorial,ans;

	for(m=2;x<1001;m++)
	{
		flag=1;

		for(nn=2;nn<m;nn++)
		{
			if(m%nn==0)
			{
				flag=0;
				break;
			}
		}

		if(flag==1)
			prime[x++]=m,;	//	printf("prime number %d=%d\n",x,m);


	}

	scanf("%d",&test);

	for(i=1;i<=test;i++)
	{
		scanf("%d %d %d", &n, &s, &p);

		factorial = (fac(n) / (fac(n-s) * fac(s)));

		//printf("factorial=%d\n",factorial);

		ans = factorial%prime[p-1];

		printf("%I64d\n",ans);
	}

	return 0;
}