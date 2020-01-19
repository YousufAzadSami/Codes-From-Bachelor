#include<stdio.h>

int main()
{
    int frequency, amplitude, i, j, testCase;

    scanf(" %d",&testCase);
    printf("\n");

    for(int t=1; t<=testCase ; t++)
    {
        scanf(" %d %d",&amplitude, &frequency);
        printf("\n");

        for(int f=1; f<= frequency ; f++)
        {

            for(i=1; i<=amplitude ; i++)
            {
                for(j=1; j<=i ; j++)
                    printf("%d",i);

                printf("\n");
            }

            for(i=amplitude-1; i>=1; i--)
            {
                for(j=i; j>=1 ; j--)
                    printf("%d",i);

                printf("\n");
            }

            printf("\n");
        }
    }

    return 0;
}
