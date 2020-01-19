#include<stdio.h>

int main()
{
	int n, m;

	while(scanf(" %d %d", &n ,&m))
	{
		printf("%d\n", n*(m+1));
	}
	
	return 0;
}