#include<stdio.h>

int main()
{
    int testCase, n,m,x,y;

    scanf(" %d",&testCase);

    for(int i=1; i<=testCase; i++)
    {
        scanf(" %d %d", &n, &m);

        if(n<m)
            printf("impossible\n");
        else
        {
            x=(n+m)/2;
            y=n-x;

            if(x+y==n)
                printf("%d %d\n",x,y);
            else
                printf("impossible\n");
        }

    }

    return 0;
}
