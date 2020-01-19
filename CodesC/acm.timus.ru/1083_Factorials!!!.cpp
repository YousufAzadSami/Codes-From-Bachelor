#include<stdio.h>
#include<string.h>

int divide(int n,int len)
{
	int total=1;

	for(int i=n; ;i = i-len )
	{
		if(i == len)
		{
			total= total * len;	
			break;
		}
		else if(i < len )
		{
			total = total * (n%len);	
			break;
		}
		else
			total=total * i;

	}

	return total;
}

int main()
{
	int n;
	char k[50];

	while(scanf(" %d %s", &n ,&k)!=EOF)
	{
		int len = strlen(k);

		
		int total = divide(n,len);

		printf("%d\n", total );
	
		
	}

	return 0;
}