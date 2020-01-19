#include<stdio.h>
void main()
{
	int a,i,total=0;
	scanf("%d",&a);

	for(i=1;i<=a;i=i+2)
	{
		total=total+i;
	}

	
	printf("%d\n\n",total);
}