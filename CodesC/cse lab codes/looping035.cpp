#include<stdio.h>
void main()

{
	int i,ii,n,tot=0,fac=1;

	printf("how many terms the series will be:");
	scanf("%d",&n);

	for(i=1;i<=5;i++)
	{
		for(ii=i;i>0;i--)
		{
		fac=fac*ii;
		}

		tot=tot+((i*i)/fac);
	}


	printf("the summation of the series will be :%d  %d",tot,fac);
}