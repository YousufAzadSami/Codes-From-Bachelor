#include<stdio.h>

int main()
{
    long long int n,k,count,i;

    while((scanf(" %lld %lld",&n ,&k)) != EOF)
    {
        for(i=1;i<=n;i++)
        {
            //++count;

            //if(count==k)
            if(i%k==0)
            {
                n++;
                count=0;
            }
        }

        printf("%lld\n",n);
    }


    return 0;
}
