#include<stdio.h>


int main()
{
	int a[105][105], i,j,n,m,mm;

	while(scanf("%d",&n) != EOF)
	{
		
		a[0][n-1] = 1;
		m=2;

		for(i=1; i<n ;i++)
		{
			a[i][n-1]= a[i-1][n-1] + (m++) ;
		}

		mm=0;

		for(i=0; i<n ; i++)
		{
			m=++mm;

			for(j=n-2; j>=i; j--)
			{
				a[i][j] = a[i][j+1] + (m++);
			}
		}

		a[n-1][0] = n*n;
		m=2;


		for(i=n-1; i>0; i--)
		{
			for(j=0; j<n-1 ; j++)
			{
				
			}
		}



		for(i=0; i<n ; i++)
		{
			for(j=0; j<n ;j++)
				printf("%3d",a[i][j]);

			printf("\n\n");
		}

	}

	return 0;
}