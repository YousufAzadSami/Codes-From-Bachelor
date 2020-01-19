#include<stdio.h>

int main()
{
    int n,division;
    char flag='b';

    while(1)
    {
        scanf("%d",&n);

        if(n==0)
            break;

		division = n;
		flag='b';

        while(1)
        {
            if(division%2==0)
                division = division/2;
            else 
                division = division/2 + 1;

            if(division==1)
                break;

            if(flag=='b')
                flag='a';
            else if(flag='a')
                flag='b';
        }

        if(flag=='b')
            printf("Alice\n");
        else
            printf("Bob\n");
    }

    return 0;
}
