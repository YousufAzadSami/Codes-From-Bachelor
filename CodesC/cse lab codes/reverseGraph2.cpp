#include<stdio.h>

int a[50][50];

int main()
{
	int i,j,vortexNo;

	printf("Enter ur vortexNo::::");
	scanf("%d", &vortexNo);

	for(i=0;i<vortexNo;i++)
	{
		printf("For vortex %d input(negative to quit):::\n",i);

		while(1)
		{
			scanf("%d", &j);

			if(j<0)
				break;

			a[i][j]=1;
		}


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