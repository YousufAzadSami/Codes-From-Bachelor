#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,i,count=0,x,y,flag=0;
	int totalFirstHalf=0, totalSecondHalf=0;
    char str[10];

    scanf(" %d",&n);

    for(i= pow(10, n-1) ; i< pow(10, n) ; i++)
    {
        itoa(i, str, 10);

		totalFirstHalf=totalSecondHalf=0; 

        for(x=0, y=n-1 ; x<n/2 ; x++,y--)
        {
			/*
            if(!(str[x]==str[y]))
                flag=1;
			*/

			totalFirstHalf += str[x];
			totalSecondHalf += str[y];
        }

        if(totalFirstHalf == totalSecondHalf)
            count++;
    }

    printf("number is %d\n",count);

    return 0;
}
