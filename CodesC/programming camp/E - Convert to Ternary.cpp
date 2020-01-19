#include<stdio.h>
#include<math.h>

int main()
{
	int ternary[20],num,base[20],i,j=0;

	for(i=0; i<20;i++)
	{
		base[j++]=(int)(pow(3, i));
	}

	while(1)
	{
		scanf("%d",&num);

		if(num<0)
			break;

		for(i=0;i<20;i++)
			ternary[i]=0;

		while(1)
		{
			for(i=0;i<20;i++)
			{
				if(base[i]>num)
					break;
			}

			i--;

			ternary[i]= num/base[i];

			num= num % base[i];

			if(num==0)
				break;
		}

		for(i=20;ternary[i]==0;i--) ;

		for(i; i>=0 ;i--)
			printf("%d",ternary[i]);

		printf("\n");


	}

	return 0;
}