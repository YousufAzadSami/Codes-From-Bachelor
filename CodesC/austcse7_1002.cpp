#include<stdio.h>

int main()
{
	int n,m;
	double xx,x1,x2,x3,yy,y1,y2,y3; 

	scanf("%d",&n);

	while(n!=0)
	{
		for(m=1;m<=n;m++)
		{
			scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);

			xx=(x1+x2+x3)/3;
			yy=(y1+y2+y3)/3;

			printf("%.1lf %.1lf",xx,yy);

		}

		scanf("%d",&n);

	
	}

	return 0;
}