#include<stdio.h>

int main()
{
	int n,i,flag,counter;

	scanf("%d",&n);

	for(counter=1;(counter<=250 && n>0 && n<=16000);counter++)
	{

		if(n==1 || n==2)
			printf("%d: no\n",counter);
		else
		{
		
			flag=0;

			for(i=2;i<n;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}

			if(flag==0)
				printf("%d: yes\n",counter);
			else
				printf("%d: no\n",counter);

		}

			scanf("%d",&n);

	}

	return 0;
}