#include<stdio.h>

int main()
{
    int n , limit , caseNo=0;

    while(1)
    {
        scanf(" %d %d", &n, &limit);

        if(n<0 && limit<0)
            break;

        caseNo++;

        int count=0;

        while(1)
        {
            if (n == 1 || n>limit )
                break;

            else if(n%2 == 0)
                n = n/2;
            else if( n%2 == 1)
                n = 3*n + 1;

                count++;
        }

		count++;

        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", caseNo, n, limit, count);




    }


    return 0;
}
