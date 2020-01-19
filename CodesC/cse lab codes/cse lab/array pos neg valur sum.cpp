#include<stdio.h>

void main()
{
	int a[50],i,n,tot_pos=0,tot_neg=0;

	printf("enter your array length::");
	scanf("%d",&n);

	printf("enter your array element::");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

		if(a[i]>0)
		{
			tot_pos=tot_pos+a[i];
		}

		else
		{
			tot_neg=tot_neg+a[i];
		}
	}

	printf("posetive sum %d\nnegative sum %d\n\n\n",tot_pos,tot_neg);
}