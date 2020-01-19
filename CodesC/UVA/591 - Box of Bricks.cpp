#include<stdio.h>

int main()
{
	int n,bricks[105],sum,avg,moves,i,loopCounter=0;

	while(1)
	{
		scanf("%d",&n);

		if(n==0)
			break;

		loopCounter++;

		sum=moves=0;

		for(i=0; i<n; i++)
		{
			scanf("%d",&bricks[i]);

			sum+=bricks[i];
		}

		avg=sum/n;

		for(i=0;i<n;i++)
		{
			if(bricks[i] > avg)
			{
				moves+=(bricks[i]-avg);
			}
		}

		printf("Set #%d\nThe minimum number of moves is %d.\n\n",loopCounter,moves);
	}

	return 0;
}