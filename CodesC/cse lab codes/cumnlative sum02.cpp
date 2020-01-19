#include<stdio.h>
#include<string.h>

void main()
{
	int a[6],i,j=0;

	printf("enter your array::");

	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<3;i++)
	{
		if(a[i]==a[5-i])
		{
			++j;
		}
	}

	if(j==3)
		printf("MATCH!!!");
	
	else 
		printf("MISmatch!!!");
}