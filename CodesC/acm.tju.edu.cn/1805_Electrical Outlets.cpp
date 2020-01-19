#include<stdio.h>


int main()
{
	int i,j,sum,m,n,str[100];

	scanf("%d",&i);

	for(j=1;j<=i;j++)
	{
		m=sum=0;

		do{
			scanf("%d",&str[m]);
			m++;
		}while(m<=str[0]);


		for(n=1;n<m;n++)
			sum=sum+str[n];

		sum=sum-(str[0]-1);

		printf("%d\n",sum);
	}

	return 0;
}