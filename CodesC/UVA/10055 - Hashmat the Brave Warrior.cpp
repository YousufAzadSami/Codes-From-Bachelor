#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int a,b;					
										/*from what i understood visual 6.0 accepts __int64(%I64%)
										  and UVA accepts long long int(%lld)                   */

	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
		if(a>b)
			printf("%lld\n",a-b);
		else
			printf("%lld\n",b-a);
	}

	
	

	return 0;
}