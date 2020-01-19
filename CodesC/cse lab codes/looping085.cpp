#include<stdio.h>
void main()
{
	int a,b,n;

	printf("enter your row number:");
	scanf("%d",&n);

	
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n;b++)
		{
			if(a==1 || a==n)
			{
				printf("*");
			}

			else
			{
				if(b==1 || b==n)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}

	printf("\n");

	}
	
}
