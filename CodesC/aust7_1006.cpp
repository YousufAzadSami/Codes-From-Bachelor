#include<stdio.h>

int main()

{
	int a,i,set,n,total=0;
	
	for(set=1;set<=250;set++)
	{
		scanf("%d",&n);
		
		if(n<=0 && n>100)
			break;

		scanf("%d",&a);

		for(i=1;i<=n && a<16000 && a>-16000;i++)
		{
			total=total+a;
		}

		printf("Sum of #%d is %d",set,total);
	}

	return 0;
}