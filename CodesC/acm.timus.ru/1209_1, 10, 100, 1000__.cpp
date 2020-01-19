#include<stdio.h>

int main()
{
    int n, total, N, k;

    scanf(" %d", &N);

    for(int m=1; m<=N ; m++)
    {
        scanf(" %d",&k);

        n=0;
        total =0;

        while(1)
        {
            if(total>k)
            {
                if(m == N)
                    printf("%d\n",0);

                else
                    printf("%d ",0);

                break;
            }

            ++total;

            if(total == k)
            {
                if(m == N)
                    printf("%d\n",1);

                else
                    printf("%d ",1);

                break;
            }

            total = total + n;
            n++;

        }
    }
}
