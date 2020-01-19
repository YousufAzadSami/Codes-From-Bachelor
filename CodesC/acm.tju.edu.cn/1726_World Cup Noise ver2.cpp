#include<stdio.h>

int main()
{
	unsigned long int n1,n2,n3;
	int i,n,a,b;

	scanf("%d",&b);

	for(a=1;a<=b;a++)
	{

		scanf("%d",&n);

		n1=2;
		n2=3;

		
		if(n==1)
			printf("Scenario #%d:\n%lu\n",a,n1);
		else if(n==2)
			printf("Scenario #%d:\n%lu\n",a,n2);

		else
		{

			for(i=3;i<=n;i++)
			{
	
				n3=n1+n2;
	
				n1=n2;
				n2=n3;

			}

			printf("Scenario #%d:\n%lu\n",a,n3);
		}

		printf("\n");
	
	}

	
	return 0;
}