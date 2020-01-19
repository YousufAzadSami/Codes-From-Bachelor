#include<stdio.h>


int main()
{
	int a[50][50], b[50][50], row, coloum, i, j;

	printf("Enter ur row and coloum respectively:\n");
	scanf(" %d %d", &row , &coloum);

	for(i=0; i<row; i++)
		for(j=0; j<coloum ; j++)
			scanf(" %d", &a[i][j]);


	
	for(i=0; i<row; i++)
	{
		for(j=0; j<coloum ; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	

	
	for(i=0; i<row; i++)
	{
		for(j=0; j<coloum ; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	printf("reverse row coloum is matrix is:\n");

	for(i=0; i<row; i++)
	{
		for(j=0; j<coloum ; j++)
		{
			printf("%3d ", b[i][j]);
		}
		printf("\n\nv");
	}

	return 0;
}