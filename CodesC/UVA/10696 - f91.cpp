#include<stdio.h>

int f91(int x)
{
	if(x<=100)
		return f91(f91(x+11));
	else
		return x-10;
}

int main()
{
	int n;

	scanf("%d",&n);

	while(n!=0)
	{
		printf("%d\n",f91(n));

		scanf("%d",&n);
		
	}

	return 0;
}