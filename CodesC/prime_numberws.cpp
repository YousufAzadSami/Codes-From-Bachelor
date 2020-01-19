#include<stdio.h>

int main()
{
	int i,j,prime[10000],flag,m=1;

	prime[0]=2;

	for(i=3;i<100000;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}

		if(flag==0)
			prime[m++]=i;
	}


	for(i=0;i<m;i++)
		printf("...%d...%d\n",i,prime[i]);

	return 0;
}