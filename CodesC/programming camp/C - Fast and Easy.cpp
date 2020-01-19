#include<stdio.h>

int main()
{
	int testCase, a[3],i,j,n,min,temp, index;

	scanf("%d", &testCase);

	for(n=1; n<=testCase ; n++)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);

		for(i=0 ; i<2; i++)
		{
			min=a[i];

			for(j=i+1; j<3; j++)
			{
				if(a[i]>a[j])
				{
					min=a[j];
					index=j;
				}
				else 
				{
					min=a[i];
					index=j;
				}
			}

			temp=a[i];
			a[i]=min;
			a[index]=temp;
		}

		printf("Case %d: %d %d %d.\n",n, a[0],a[1],a[2]);


		/*for(i=0; i<3 ; i++)
			printf(" %d",a[i]);

		printf(".\n");*/
	}

	return 0;
}