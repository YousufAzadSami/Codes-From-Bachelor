#include<stdio.h>
void main()
{
	int i=5,tot=0,n;

	for(n=1;n<=75;n++)
	{
	

		if(n%2==1)
		{
			tot=tot+i;
		}

		else if(n%2==0)
		{
			tot=tot-i;
		}

		i=i+6;
	}

	printf("%d\n",i);
	printf("summation of the series is:%d\n",tot);
}