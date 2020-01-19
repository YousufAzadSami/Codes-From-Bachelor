#include<stdio.h>

int a[50][50];

int main()
{
	int vortexNo,i,j;

	printf("Enter ur vortexNo:::");
	scanf(" %d",&vortexNo);

	printf("Enter ur input(negative number to quit):::\n\n");

	while(1)
	{
		scanf(" %d %d", &i ,&j);

		if(i<0 || j<0)
			break;

		a[i][j] = 1;
	}

	for(i=0; i<vortexNo;i++)
	{
		for(j=0; j<vortexNo; j++)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}