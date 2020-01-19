#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	
	printf("how many rows u wanna have:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}

		for(k=1;k<=(i);k++)
		{
			printf("%d",k);
		}

		
		if(i>=2)
		{
			for(l=k-2;l>=1;l--)
			{
				printf("%d",l);
			}
		}



	printf("\n");


	}
}