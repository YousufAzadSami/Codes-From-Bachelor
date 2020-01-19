#include<stdio.h>

int main()
{
	int x,dataSet,i,j,a[1010],sum,count;
	double percentage,average;
	
	scanf("%d",&dataSet);

	for(x=1;x<=dataSet;x++)
	{
		sum=count=0;
		//a[0]=25000;

		for(i=0;i!=(a[0]+1);i++)
		{
			scanf("%d", &a[i] );
			sum=sum+a[i];

		}

		sum=sum-a[0];

		average = (double) sum / a[0];

		for(j=1;j<i;j++)
		{
			if(a[j]>average)
				++count;
		}

		percentage = ((double) count / a[0] ) * 100.00;

		printf("%.3lf%%\n",percentage);


	}

	return 0;
}