#include<stdio.h>

int main()
{
	int i,arr[200],sum;
	
	while(1)
	{
		sum=0;

		for(i=0;i!=arr[0]+1;i++)
		{
			scanf("%d",&arr[i]);

			if(i==0)
				continue;
			else
				sum=sum+arr[i];
		}

		if(arr[0]==0)
			break;

		printf("%d\n");
	}

	return 0;
}