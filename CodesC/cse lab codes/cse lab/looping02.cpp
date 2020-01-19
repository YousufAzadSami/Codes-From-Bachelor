#include<stdio.h>

void main()
{
	int a,b,c,i;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	for(i=2;1;i++)
	{
	
		if(i%a==0 && i%b==0 && i%c==0)
		{
			printf("LCM=%d\n",i);
			break;
		}


	}

}
