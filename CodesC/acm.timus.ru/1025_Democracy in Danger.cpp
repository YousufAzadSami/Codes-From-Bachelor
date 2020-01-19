#include<stdio.h>

int main()
{
	int k, kk[105], total =0, i, j, index, temp, min;

	while(scanf("%d",&k)!=EOF)
	{
		for(i=0; i<k; i++)
			scanf("%d",&kk[i]);

		//sorting!!!	
		
		for(j=0;j<k;j++)
		{
			min=10000;

			for(i=j ;i <k; i++)
			{
				if(kk[i]<min)
				{
					min=kk[i];
					index=i;
				}
			}

			temp = kk[j];

			kk[j] = min;

			kk[index] = temp ;

		}

		//printing to chk :P
		/*
		for(i=0 ; i<k ; i++)
			printf("%d",kk[i]);
		*/

		for(i=0; i<(k/2)+1; i++)
		{
			total=total + ( kk[i]/2 + 1);
		}

		printf("%d\n",total);


		
	}

	return 0;
}