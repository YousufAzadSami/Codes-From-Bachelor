#include<stdio.h>


void main()
{
//	int a[]={2,4,6,8,10,12,14};
	int a[50];
	int i,j,x;

	printf("Enter your desired number:");
	scanf("%d",&x);

	for(i=0;i<7;i++)
		scanf("%d",&a[i]);

	for(i=0;i<7;i++)
	{
		if(x>a[i] && x<a[i+1])
			break;
	}

	for(j=10;j>=(i+1);j--)
	{
		a[j+1]=a[j];
	}

	a[i+1]=x;

	for(i=0;i<8;i++)
		printf("%d ",a[i]);
}