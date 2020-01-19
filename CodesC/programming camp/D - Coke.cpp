#include<stdio.h>

int main()
{
	int testCase, i,n,k,latestTotal, initialBonus, result, latestBonus;

	scanf("%d",&testCase);

	for(i=1; i<=testCase; i++)
	{
		scanf("%d %d",&n,&k);

		/*for(j=1; j<=n; j++)
		{
			if(j%k==0)
				n++;
		}*/

		initialBonus=n/k;

		latestTotal = initialBonus + n;

		latestBonus = latestTotal / k ;

		result= n + latestBonus ;



		printf("Case %d: %d\n",i,result);
	}

	return 0;
}