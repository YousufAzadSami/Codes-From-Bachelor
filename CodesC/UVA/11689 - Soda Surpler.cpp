#include<stdio.h>

int main()
{
    int n, remainder, division, a, b, cokePerBottle, testCase, total;

    scanf("%d", &testCase);

    while(testCase--)
    {
        scanf(" %d %d %d", &a, &b, &cokePerBottle);

        n= a+b;
        total=0;

        while( n>=cokePerBottle )
        {
            division  = n/cokePerBottle;
            remainder = n%cokePerBottle;

            n = division + remainder;

            total += division;
        }

        printf("%d\n", total);
    }


    return 0;
}
