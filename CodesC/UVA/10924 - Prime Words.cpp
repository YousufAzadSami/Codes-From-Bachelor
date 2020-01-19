#include<stdio.h>
#include<string.h>

int main()
{
    char str[25];
    int total,i;

    while( (gets(str)) != NULL)
    {
        total =0;
        for( i=0; str[i]!= '\0' ; i++)
        {
            if(str[i]<= 'z' && str[i]>= 'a')
                total = total + ( str[i] - ('a' - 1) );
            else
                total = total + ( str[i] - ('A' - 1 )) + 26;
        }

        for( i=2; i<total ; i++)
        {
            if( total%i==0)
                break;
        }

        //printf("\n\ntotal = %d\n", total);

        if(i==total)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }


    return 0;
}
