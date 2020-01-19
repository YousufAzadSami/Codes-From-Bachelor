#include<stdio.h>

int main()
{
	int year;
	double ini,ann,ter;

	while(scanf("%lf %lf %lf",&ini,&ann,&ter)!=EOF)
	{


		for(year=1;;year++)
		{
			

	
			ini=ini+((ann*ini)/100);


			if(ini>=ter)
				break;
		}

		printf("%d\n",year);
	}


	return 0;
}