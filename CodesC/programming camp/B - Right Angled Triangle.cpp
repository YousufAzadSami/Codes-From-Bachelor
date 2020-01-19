#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;

	while((scanf("%d %d",&a,&c)) != EOF)

	{
		if(c>a)
			b = sqrt( pow(c,2) - pow(a,2) );
		else
			b = sqrt( pow(a,2) - pow(c,2) );
		
		printf("%d\n", b);
	}

	return 0;
}