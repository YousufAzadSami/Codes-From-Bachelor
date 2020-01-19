#include<stdio.h>

void main()
{
	int n,i,j;
	
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

			for(j=1;j<=(n/2+1);j++)
			{
				if(i==1 || i==n || j==1)
				{
					printf("%d",j);
				}

				printf(" ");
			}

			for(j=j-2;j>=1;j--)
			{
				if(i==1 || i==n || j==1)
				{
					printf("%d",j);
				}

				printf(" ");
			}

		

		printf("\n");
	}
}