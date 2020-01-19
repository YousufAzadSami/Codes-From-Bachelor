#include<stdio.h>

int main()
{
    int i , incriment;                      // lineNo is the number of the position of the number of the odd series
    long long int total, summation, nthMember, lineNo;

    while((scanf(" %lld",&lineNo)) != EOF )
    {
        /*

        incriment=6;
        total = 1;
        summation = 0;

        for( i=1; i<=lineNo ; i++)
        {
            if( i==1 )
                total += incriment;

            else
            {
                incriment = incriment + 4;
                total +=incriment;
            }
        }

        summation = total + total - 2 + total - 4 ;
        */

        nthMember = (lineNo+1) / 2 ;

        summation = nthMember * nthMember ;    //summation till the nth member of the odd series, for 9, n=5 and summation is 25

        //total = (summation*2 - 1) +  (summation*2 - 3) + (summation*2 - 5);
        total = (summation*2*3 - 9) ;



        printf("%lld\n", total);
    }


    return 0;
}
