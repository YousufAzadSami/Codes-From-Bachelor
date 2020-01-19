#include<stdio.h>

int main()
{
	short int n,i,a,b,num[3001];

	while(1)
	{

		for(i=0;i!=num[0]+1;i++)
		{
				scanf("%hd",&num[i]);

			if(num[0]<0)
				break;
		}

		if(num[0]<0)
			break;

		

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