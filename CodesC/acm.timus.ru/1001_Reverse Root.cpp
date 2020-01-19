#include<stdio.h>
#include<math.h>

int main()
{
	double num[300];
	int i=0,j;

	while(scanf("%lf",&num[i])!=EOF)
		i++;
	

	for(j=i-1;j>=0;j--)
		printf("%.4lf\n",sqrt(num[j]));

	return 0;
}