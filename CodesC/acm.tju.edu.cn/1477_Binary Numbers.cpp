#include<stdio.h>

int main()
{
	int num,bin[50],i,j,x,tc;

	scanf("%d",&tc);

	for(int m=1;m<=tc;m++)
	{
		scanf("%d",&num);

		i=0;

		for(x=0;x<50;x++)
			bin[x]=0;

		while(num!=0)
		{
			bin[i]=num%2;
			i++;
			num=num/2;
		}

		for(j=0;j<i;j++)
		{
			if(bin[j]==1)
				x=j;
		}


		for(j=0;j<i;j++)
		{
			if(bin[j]==1)
				if(j==x)
					printf("%d",j);
				else
					printf("%d ",j);
		}

		printf("\n");

	}
	return 0;

}