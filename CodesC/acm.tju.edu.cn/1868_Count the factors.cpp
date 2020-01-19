#include<stdio.h>

int main()
{
	int i,j,count,prime[500],a=0;

	prime[0]=(2);

	for(i=3;i<=20000000;i++)
	{
		count=1;

		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count=0;
				break;
			}
		}

		if(count==1)
		{
			prime[++a]=i;
			printf("%d***\n",i);
		}
	}


	for(i=0;i<=a;i++)
		printf("%d===%d\n",a,prime[a]);

	return 0;
}