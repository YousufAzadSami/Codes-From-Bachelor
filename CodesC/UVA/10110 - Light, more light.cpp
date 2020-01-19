#include<stdio.h>

int main()
{
    int n, i, flag=0;

    while(1)
    {
        scanf(" %d", &n);

        if(n==0)
            break;

        flag=0;

        for(i=1 ; i<=n; i++)
        {
            if(n%i==0)
            {
                if(flag==0)
                    flag=1;
                else
                    flag=0;
            }
        }

        if(flag==0)
            printf("no\n");
        else
            printf("yes\n");
    }


    return 0;
}
