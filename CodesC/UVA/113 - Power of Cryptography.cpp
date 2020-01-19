#include<stdio.h>
#include<math.h>

int main()
{
    double expotent,base;

    while((scanf(" %lf %lf", &expotent, &base)) != EOF)
    {
        double k = pow( base, (1/expotent));

        printf("%.0lf\n",k);
    }

    return 0;
}
