#include<stdio.h>

int main()
{
	double hr,min,ang;


	while((scanf("%lf %*c %lf",&hr,&min))!=EOF)
	{
		if(hr==0 && min==0)
			break;

		ang=(hr*5*6)+(min*(5.0/60.0)*6)-(min*6);

		if(ang<0)
			ang=ang*-1;

		if(ang>180)
			ang=360.0-ang;

		printf("%.3lf\n",ang);
	}

	return 0;
}