#include<stdio.h>
#include<math.h>

int main()
{
    int testCase, result;
    double x, y;

    scanf(" %d",&testCase);

    while(testCase--)
    {
        scanf(" %lf %lf", &x, &y);

        x = ceil((x-2) / 3);
        y = ceil((y-2) / 3);

        result = x*y;

        printf("%d\n",result);
    }


    return 0;
}
