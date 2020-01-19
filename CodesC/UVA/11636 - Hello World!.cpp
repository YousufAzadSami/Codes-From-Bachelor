#include<stdio.h>

int main()
{
	int num,i,pro,counter=0;

	scanf("%d",&num);

	while(num>0)
	{
		
		counter++;
		pro=1;

		for(i=0;pro<num;i++)
			pro = pro*2;

		printf("Case %d: %d\n",counter, i);

		scanf("%d",&num);
		
	}

	return 0;
}