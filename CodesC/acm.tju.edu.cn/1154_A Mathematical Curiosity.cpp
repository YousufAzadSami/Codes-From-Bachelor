#include<stdio.h>

int main()
{
	int n,m,a,b,ans,count,i=1;
	double m1,ans1,x;

	while(1)
	{
		count=0;

		scanf("%d %d",&n,&m);
		if(n==0 && m==0)
			break;

		
		m1=m;

		for(b=2;b<n;b++)
		{
			for(a=1;a<b;a++)
			{
				ans1=(a*a+b*b+m1)/(a*b);
			

			ans=ans1;

			x=ans1-ans;

			if((x)==0.0)
				++count;
			}

		}

		printf("Case %d: %d\n",i,count);
		
		i++;
	}

	return 0;
}