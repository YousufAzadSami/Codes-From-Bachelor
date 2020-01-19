#include<stdio.h>

int main()
{
	int no,i,a,b,m,n,max,min;

	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
		scanf("%d %d",&a,&b);

		if(a>b)
			max=a;
		else
			max=b;
		
		//this portion determines lcm
		for(m=max;1;m++)
		{
			if(m%a==0 && m%b==0)
				break;
		}

		//this portion determines gcd
		for(n=1;n<=max;n++)
		{
			if(a%n==0 && b%n==0)
				min=n;
		}


		printf("%d %d %d\n",i,m,min);
	}

	return 0;
}