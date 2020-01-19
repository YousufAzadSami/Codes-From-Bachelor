#include<stdio.h>

int main()
{
	short int n,i,a,b,num[3002];

	while(scanf("%hd",&num[0])!=EOF)
	{

		for(i=1;i!=(num[0]+1);i++)
		{
				scanf("%hd",&num[i]);

			
		}

		

		

		for(a=num[0],b=1;a>=2;a--,b++)
		{
			n=num[a]-num[a-1];

			if(!(n==-(b) || n==(b)))
				break;
		}

		if(a==1)
			printf("Jolly\n");
		else
			printf("Not jolly\n");


	}
	
	return 0;
}