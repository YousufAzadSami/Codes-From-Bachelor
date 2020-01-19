#include<stdio.h>

int main()
{
	int n1,n2,n3,i,n,a,b;

	while(1)
	{

		scanf("%d %d %d",&a,&b,&n);

		if(a==0 && b==0 && n==0)
			break;

		n1=n2=1;

		for(i=3;i<=n;i++)
		{
			n3=(a*n2+b*n1)%7;

			n1=n2;
			n2=n3;
		}

		
		if(n==1 || n==2)
			printf("%d\n",n1);
		else
			printf("%d\n",n3);
	}

	return 0;
}