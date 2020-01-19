#include<stdio.h>

int main()
{
	int i,j,n,m;

	while(scanf("%d %d",&n,&m)!=EOF)
	{
		for(i=1;i<=m+2;i++)
		{
			if(i==1)
			{
				for(j=1;j<=n+2;j++)
				{
					if(j==1 || j==n+2)
						printf("+");

					else
						printf("-");
				}

				printf("\n\n");
			}


			else if(i==m+2)
			{
				for(j=1;j<=n+2;j++)
				{
					if(j==1 || j==n+2)
						printf("+");

					else
						printf("-");
				}

			}

			else
			{
				for(j=1;j<=n+2;j++)
				{
					if(j==1 || j==n+2)
						printf("|");
					else
						printf(" ");
				}

				printf("\n\n");
			}

		}

		printf("\n\n");
	}

	return 0;
}