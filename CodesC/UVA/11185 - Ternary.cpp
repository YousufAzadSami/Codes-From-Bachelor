#include<stdio.h>
#include<math.h>

int ternary[1000];

int main()
{
	int num, position[1000],i,digitPosition,flag=0;

	for(i=0;position[i]<50000;i++)
	{
		position[i] = pow(3,i);
	}

	while(1)
	{
		scanf("%d",&num);

		if(num<0)
			break;

		for(i=0;i< flag+2 ;i++)
			ternary[i]=0;

		

		while(num!=0)
		{
			for(i=0 ; num>=position[i] ; i++);

			flag=digitPosition = i - 1;

			ternary[digitPosition] = num/position[digitPosition];
			num = num%position[digitPosition];	
		}
		
		for(i=0;i<=flag;i++)
			printf("%d",ternary[i]);

		printf("\n");

	}

	return 0;
}