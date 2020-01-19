#include<stdio.h>

int main()
{
	int a[1001],cc,c,i,count,sum;
	double avg,per;

	scanf("%d",&c);

	for(cc=1;cc<=c;cc++)
	{
		sum=0;
		count=0;

		for(i=0;i!=(a[0]+1);i++)
			scanf("%d",&a[i]);

		//for(i=0;i!=a[0]+1;i++)
		//	printf("%d*** %d\n",i,a[i]);

		
		for(i=1;i!=(a[0]+1);i++)
			sum=sum+a[i];

		avg=(double)sum/a[0];

		for(i=1;i!=(a[0]+1);i++)
		{
			if(a[i]>avg)
			{
				++count;
			}
		}

		per=(double)(count*100)/a[0];

		printf("%.3lf%%\n",per);
	}
	

	return 0;
}