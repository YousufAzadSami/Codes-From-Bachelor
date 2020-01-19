#include<stdio.h>

void main()
{
	int n1,n2,n3,i;

	printf("Enter three numbers:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);

	for(i=1;i<=n1*n2*n3;i++)
	{
		if(i%n1==0 && i%n2==0 && i%n3==0)
			break;
	}

	printf("L.C.M=%d\n\n",i);


	for(i=n1*n2*n3;i>=0;i--)
	{
		if(n1%i==0 && n2%i==0 && n3%i==0)
			break;
	}

	printf("G.C.D=%d\n\n",i);

}