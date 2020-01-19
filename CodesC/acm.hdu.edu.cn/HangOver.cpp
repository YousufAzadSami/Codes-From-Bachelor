#include<stdio.h>

int main()
{
	int i;
	double sum,n,ii;

	while(1)
	{
		scanf("%lf",&n);

		if(n==0.00)
			break;

		sum=0.0;

		for(i=1;1;i++)
		{
			ii=i;

			sum=sum+(1/(ii+1));

			if(sum>=n)
				break;
		}

		printf("%d card(s)\n",i);
	}

	return 0;
}