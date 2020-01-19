#include<stdio.h>


int main()
{
	long long int a,b,c;
	int testCase,i;
	

	scanf("%d",&testCase);

	for(i=1; i<=testCase; i++)
	{
		scanf(" %lld %lld %lld",&a,&b,&c);

		//max=maxinum(a,b,c);

		if( a+b>c && b+c>a && c+a>b )
		{
			if(a==b && b==c)
				printf("Case %d: Equilateral",i);

			else if(a==b || b==c || c==a)
				printf("Case %d: Isosceles",i);

			else
				printf("Case %d: Scalene",i);
		}

		
		else 
			printf("Case %d: Invalid",i);


		printf("\n");

	}

	return 0;
}