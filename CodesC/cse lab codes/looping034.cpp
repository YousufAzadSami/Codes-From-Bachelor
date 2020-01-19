#include<stdio.h>
void main()
{
	int n,nn,tot=0,a;
	
	printf("enter how many times u wanna add:");
	scanf("%d",&a);
	
	
	for(n=1;n<=a;n++)
		for(nn=1;nn<=n;nn++)
		{
			tot=tot+nn;
		}


	printf("summatoin of the series is:%d\n",tot);

}