#include<stdio.h>

int main()
{
	int a[50][50], vertexNo , i, j, count;

	printf("Enter your vertex no(less than 50):::");
	scanf(" %d", &vertexNo);


	printf("Enter ur graph:::\n");

	for(i=0;i<vertexNo;i++)
	{
		for(j=0;j<vertexNo;j++)
		{
			scanf(" %d", &a[i][j]);		
		}
	}


	printf("your graph representation is:::\n");
	
	for(i=0;i<vertexNo;i++)
	{
		for(j=0;j<vertexNo;j++)
		{
			if(a[i][j] == 1)
			{
				printf("%d ---> %d\n", i,j);
			}
		}
	}


	printf("\n\n\n\nOUTdegree of the Graph:::\n");
	for(i=0;i<vertexNo;i++)
	{
		for(j=0;j<vertexNo;j++)
		{
			count=0;
			if(a[i][j] == 1)
			{
				count++;
			}		
		}
		
		printf("Outdegree of %d is %d\n", i,count);
	}
	

	
	printf("\n\n\n\nIndegree of the Graph:::\n");
	for(j=0;j<vertexNo;j++)
	{
		for(i=0;i<vertexNo;i++)
		{
			count=0;
			if(a[i][j] == 1)
			{
				count++;
			}			
		}

		printf("INdegree of %d is %d\n", j,count);
	}
	return 0;
}