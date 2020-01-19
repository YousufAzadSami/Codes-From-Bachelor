#include<stdio.h>

void main()
{
	int a[30],b[30],n2,n1,tot,i,j;

	printf("the length of array::");

	scanf("%d",&n1);
	scanf("%d",&n2);

	printf("enter array elements::");

	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n2;i++)
	{	
		tot=0;

		for(j=0;j<=i;j++)
		{
			tot=tot+a[j];
		}

		b[i]=tot;
	}

		
	for(i=0;i<n1;i++)
	{
		printf("%d\t",a[i]);
	}

		printf("\n");
	
	for(i=0;i<n2;i++)
	{
		printf("%d\t",b[i]);
	}
}