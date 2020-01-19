#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char decrypted[205], encrypted[205];
    int len, index, n, testCase;

    scanf(" %d", &testCase);
    getchar();

    while(testCase--)
    {
        gets(decrypted);

        len = strlen(decrypted);
        index=0;

        for(int i=1; i<len; i+=2)
        {
            //n = decrypted[i] - '0';
            n = atoi( decrypted[i] );

            for(int j=0; j<n ; j++)
            {
                encrypted[index++] = decrypted[i-1];
            }
        }

        encrypted[index] = NULL;

        puts(encrypted);
    }



    return 0;
}
