#include<stdio.h>

int main()
{ 
	int a[50][50], b[50][50], i,j , aRow, aColoum, bRow, bColoum;
	int total , result[50][50],n;




	printf("row for A:\n");
	scanf("%d", &aRow);
	printf("coloum of A:\n");
	scanf("%d", &aColoum);
	printf("Enter element:\n");

	for(i=0; i<aRow ; i++)
	{
		for(j=0; j<aColoum; j++)
		{
			scanf(" %d", &a[i][j]);
		}
	}
	
	printf("Matrix A is:\n");
	
	for(i=0; i<aRow ; i++)
	{
		for(j=0; j<aColoum; j++)
		{
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}


	printf("\n\n\n");

	//for B
	printf("row for B:\n");
	scanf("%d", &bRow);
	printf("coloum of B:\n");
	scanf("%d", &bColoum);
	printf("Enter element:\n");

	for(i=0; i<bRow ; i++)
	{
		for(j=0; j<bColoum; j++)
		{
			scanf(" %d", &b[i][j]);
		}
	}
	
	printf("Matrix B is:\n");
	
	for(i=0; i<bRow ; i++)
	{
		for(j=0; j<bColoum; j++)
		{
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}


	printf("\n\n\n\n");
	/////////////////////////////////////////////

	for(i =0; i<aRow; i++)
	{
		for(j=0; j<bColoum ; j++)
		{
			total = 0;
			//result[i][j]=0;

			for(n=0 ; n<aColoum ; n++)
			{
				//result[i][j] += a[i][n] * b[n][j];
				total += a[i][n] * b[n][j];
			}
			result[i][j] = total; 
		}

		
	}


	printf("Multiplication Result:\n");
	for(i=0; i<aRow ; i++)
	{
		for(j=0; j<bColoum; j++)
		{
			printf("%3d ", result[i][j]);
		}
		printf("\n");
	}


	return 0;
}
