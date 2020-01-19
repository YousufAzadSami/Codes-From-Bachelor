#include<stdio.h>

int main()
{
	int a,b;

	while(scanf("%d %d",&a,&b)!=EOF)
	{

		if((a+b)%86==0)
			printf("yes");
		else 
			printf("no");
	}

	return 0;
}
