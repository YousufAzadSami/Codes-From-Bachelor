#include<stdio.h>

int main()
{
	_int64 a,b;			//from what i understood visual 6.0 accepts _int64
						//and UVA accepts long long int

	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b>=a)
			printf("%d\n",b-a);
		else 
			printf("%d\n",a-b);
	}

	return 0;
}