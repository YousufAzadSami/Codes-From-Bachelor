#include<stdio.h>

int main()
{
	int arr[100],i,k,flag,num,prb,p;

	scanf("%d",&prb);

	for(p=1;p<=prb;p++)
	{

		for(i=0;i!=(arr[0]+1);i++)
		{
			scanf("%d",&arr[i]);
	
		}

		for(num=2;;num++)
		{
			for(k=1;k<=arr[0];k++)
			{
				if(num%arr[k]!=0)
				{
					flag=0;
					break;
				}
				else
					flag=1;
				

			}

			if(flag==1)
			{
				printf("%d\n",num);
				break;
			}
		}

	}

	return 0;

}