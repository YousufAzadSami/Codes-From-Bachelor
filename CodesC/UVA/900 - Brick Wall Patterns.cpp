#include<stdio.h>

int main()
{
    long long int f1,f2, total;
    int n;

    while(scanf(" %d",&n))
    {
        if(n==0)
            break;

        f1=1;f2=2;total=0;

        for(int i=3; i<=n; i++)
        {
            total = f1 + f2;

            f1=f2;
            f2=total;
        }
        if(n==1)
            printf("%lld\n",f1);
        else if(n==2)
            printf("%lld\n",f2);
        else
            printf("%lld\n",total);
    }

    return 0;
}
