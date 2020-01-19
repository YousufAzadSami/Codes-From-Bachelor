#include<stdio.h>

int main()

{
	int set,n,a,i,total,flag;
	
	for(set=1;set<=250;set++)
	{
		scanf("%d",&n);
		
		if(n<=0 )
			break;

		total=0;
		i=0;
		flag=1;


		do{
			++i;

			scanf("%d",&a);
			total=total+a;

			

		}while(i<n);

		

		printf("Sum of #%d is %d\n",set,total);
	}

	return 0;
}