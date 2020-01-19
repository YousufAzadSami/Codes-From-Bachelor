#include<stdio.h>
void main()
{

	int i,total=0,n;

	for(i=7,n=0;n<=100;n++,i=i+13)
	{
		total=total+i;
	}

	printf("summation of the series:%d\n\n",total);
}