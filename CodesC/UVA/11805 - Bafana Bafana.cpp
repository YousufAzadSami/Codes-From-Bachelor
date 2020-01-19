#include<stdio.h>

int main()
{
    int n,k,p, testCase,i;

    scanf(" %d",&testCase);

    for(int x=1; x<=testCase; x++)
    {
        int count=0;

        scanf(" %d %d %d",&n, &k, &p);

        for( i=k+1 ; ;i++)
        {
            if(i == n+1)
                i=1;

            count++;

            if(count == p)
                break;
        }

        printf("Case %d: %d\n",x ,i);
    }

    return 0;
}
