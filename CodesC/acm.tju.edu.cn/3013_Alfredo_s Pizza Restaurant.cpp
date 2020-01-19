#include<stdio.h>
#include<math.h>

int main()
{
	double r,w,l;
	int count=0;

	while(1)
	{

		scanf("%lf",&r);
	
		if(r==0)
			break;	

		scanf("%lf %lf",&w,&l);
		

		if(r>=(sqrt(w*w+l*l))/2)
			printf("Pizza %d fits on the table.\n",++count);
		else
			printf("Pizza %d does not fits on the table.\n",++count);


	}
	return 0;
}