#include<stdio.h>

func_lcm(int x,int y)
{
	int i;

	for(i=1;i!=x*y;i++)
	{
		if(i%x==0 && i%y==0)
			break;
	}

	return i;

}

void main()
{
	int a,b,lcm;

	printf("Enter your two numbers:");
	scanf("%d  %d",&a,&b);

	lcm=func_lcm(a,b);

	printf("L.C.M of %d and %d is = %d\n\n\n",a,b,lcm);
}