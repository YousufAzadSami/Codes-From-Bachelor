#include<stdio.h>

int main()
{
    int x1,x2,xi,y1,y2,yi, testCase, cowNo;

    scanf("%d", &testCase);

    for(int t=1; t<=testCase; t++)
    {
        scanf(" %d %d %d %d", &x1, &x2, &y1, &y2);
        scanf(" %d", &cowNo);

        printf("Case %d:\n", t);

        while(cowNo--)
        {
            scanf(" %d %d", &xi, &yi);

            if( x1<xi && xi<x2 && y2<yi && yi<y1)
                printf("Yes");
            else
                printf("No");

            printf("\n");
        }
    }

    return 0;
}
