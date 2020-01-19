#include<stdio.h>

int main()
{
	int n, total, i, j, t;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);

		total=1;

		for(j=2;j<n;j++)
		{
			if(10%j !=0)
			{
				total=total+j;
			}

			printf("total number is %d\n",total);
		}
	}

	return 0;
}