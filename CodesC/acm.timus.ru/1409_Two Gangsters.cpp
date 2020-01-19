#include<stdio.h>

int main()
{
	int harry, larry, total;

	while(scanf(" %d %d", &harry, &larry)!= EOF)
	{
		total=harry + larry -1;

		printf("%d %d\n",total - harry, total - larry);
	}

	return 0;
}