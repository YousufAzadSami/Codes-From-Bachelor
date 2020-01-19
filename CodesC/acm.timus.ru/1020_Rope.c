#include<stdio.h>
#include<math.h>

int main()
{
    double radius, x1=0, y1=0, x2,y2,total =0, distance, firstX, firstY;
    int n,i;

    scanf(" %d %lf",&n , &radius );

    for(i=0 ; i<n ; i++)
    {
        scanf("%lf %lf",&x2, &y2);

		if(i!=0)
		{
			distance = sqrt ( pow(x1-x2,2) + pow(y1-y2,2) );
	        total = total + distance;
		}

		if(i==0)
		{
			firstX=x2;
			firstY=y2;
		}

        x1=x2;
        y1=y2;
    }



    //printf("\n\nwithout circumference %lf \n",total);

    total = total + ( 3.1416 * 2 * radius ) + sqrt ( pow(x1-firstX,2) + pow(y1-firstY,2) ) ;

    printf("%.2lf\n",total);

    return 0;
}
