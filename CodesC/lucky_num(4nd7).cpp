#include<stdio.h>

void main()
{
	int i,ii,a,flag;

	for(i=4;i<=100000;i++)
	{

		ii=i;
		flag=1;

		while(ii!=0)
		{
			a=ii%10;

			if(!(a==4 || a==7))
			{
				flag=0;
				break;
			}
			
			ii=ii/10;

	
		}

		if(flag==1)
			printf("%d\n ",i);

	}
}