
#include<stdio.h>

void main()
{
	int a[50],x,y,n,min,z,flag;

	printf("enter the length of the array:");
	scanf("%d",&n);

	for(x=0;x<n;x++)
	{
		scanf("%d",&a[x]);
	}

	for(x=0;x<n;x++)
	{
		min=a[x];
		flag=0;

		for(y=x;y<n;y++)
		{
			if(min>a[y])
			{
				min=a[y];
				z=y;
				flag=1;
				
				//a[z]=a[x];
				//a[x]=min;
			}
		}

		
		if(flag==1)
		{
			a[z]=a[x];
			a[x]=min;
		}
		
		printf("%d",min);
	}

	printf("\n");

	
	for(x=0;x<n;x++)
	{
		printf("%d\t",a[x]);
	}
}