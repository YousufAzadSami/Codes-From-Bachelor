#include<stdio.h>

int main()
{
	int i,j,trainLength,count=0,temp,arr[55],m,testCase;


	scanf("%d", &testCase);

	for(m=1;m<=testCase;m++)
	{

		for(i=0;i<=55;i++)
			arr[i]=0;

		count=0;

		scanf("%d",&trainLength);

		for(i=0;i<trainLength;i++)
			scanf("%d",&arr[i]);

		for(i=0;i<trainLength-1;i++)
		{
			for(j=i+1;j<trainLength;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					count++;
				}
			}
		}

		printf("Optimal train swapping takes %d swaps.\n",count);

	}

	return 0;
}
