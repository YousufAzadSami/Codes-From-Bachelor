#include<stdio.h>

int main()
{
	int i,cuts;
	long long pieces;	//for visual c u must use __int64 nd %I64d, bt for UVa u must use the currently used pattern

	while(1)
	{
		scanf("%d",&cuts);

		if(cuts<0)
			break;

		pieces=1;

		for(i=1; i<=cuts; i++)
			pieces = pieces + i;

		printf("%lld\n",pieces);
	}

	return 0;

}