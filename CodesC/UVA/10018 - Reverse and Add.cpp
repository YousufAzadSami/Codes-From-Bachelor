#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int makeItReverse(int original)
{
    int rev=0;
	char str[15];

	itoa( original , str, 10);
	 
	int len= strlen(str)-1;

    for(int i=pow(10,len) ; original != 0 ; i=i/10)
    {
        rev = rev + (original%10) * i;

        original= original/10;
    }

    return rev;
}

int isItPalindrom(int original)
{
    char str[15];
    int i,j;

    itoa( original , str , 10 );

	int len= strlen(str) - 1;

    for(i=0, j=len ; (len-1)/2 <=i ; i++, j--)
    {
        if(str[i] != str[j])
        {
            return 0;
        }
    }

    return 1;


}

int main()
{
    unsigned int original, reverse;
    int testCase, i;

    scanf(" %d", &testCase);

    while(testCase--)
    {
        scanf("%u",&original);

        for(i=1; ; i++)
        {
            reverse = makeItReverse(original);

            //add
            original = original + reverse;



            if(isItPalindrom(original))
                break;
        }

        printf("iteration %d, palindrom %u\n", i, original);


    }





    return 0;
}
