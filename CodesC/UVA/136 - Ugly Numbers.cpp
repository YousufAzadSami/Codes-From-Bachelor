#include<stdio.h>

int main()
{
	unsigned int m,i,du,ugly[1550];

	//ugly[0]=1;
	i=-1;

	for(m=1;i!=149;m++)
	{
		du=m;

		while(1)
		{
			if(du%2==0)
				du=du/2;
			if(du%3==0)
				du=du/3;
			if(du%5==0)
				du=du/5;
		 
			

			if(du==1)
				ugly[++i]=m;

			if(du%2!=0 && du%3!=0 && du%5!=0)
				break;
		}

		//ugly[++i]=m;
	}

	for(int x=0;x<=149;x++)
		printf("%u...%u\n",x+1,ugly[x]);

	//printf("The 1500'th ugly number is %u.\n",ugly[1499]);

	return 0;
}