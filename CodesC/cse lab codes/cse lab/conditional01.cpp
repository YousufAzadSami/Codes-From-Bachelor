#include<stdio.h>
void main()
{
	int a,b,c;

	printf("enter three numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	printf("maximum number is ");

	if(a>b)
	{
		if(a>c)
			printf("a=%d\n",a);
		else
			printf("c=%d\n",c);
	}
		else
		{
			if(b>c)
				printf("b=%d\n",b);
			else
				printf("c=%d\n",c);
		}




	printf("minimum number is ");

	if(a<b)
	{
		if(a<c)
			printf("a=%d\n",a);
		else
			printf("c=%d\n",c);
	}
		
		else
		{
			if(b<c)
				printf("b=%d\n",b);
			else
				printf("c=%d\n",c);
		}

}