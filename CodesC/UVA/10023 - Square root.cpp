#include<stdio.h>
#include<math.h>

int main()
{
    long long int x,y;

    int n;

    scanf(" %d",&n);
    printf("\n");

    while(n--)
    {
        scanf(" %lld",&x);
        printf("\n");

        y=pow(x, .5 );

        printf("%lld\n\n", y);
    }


    return 0;
}
