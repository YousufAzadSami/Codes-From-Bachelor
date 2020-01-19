#include<stdio.h>
void main()
{

	int i,total=0;

	for(i=3;i<=1691;i=i+8)
	{
		total=total+i;
	}

	printf("\n\nsummation of the series:%d\n\n",total);
}