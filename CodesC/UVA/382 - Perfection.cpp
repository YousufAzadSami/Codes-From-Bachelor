#include<stdio.h>

int main()
{
    int a[105],total,i=0,m,n;

    a[i]=1;

    /*
    while( a[i-1] != 0 )
    {
        scanf("%d",a[i]);
        i++;
    }
    */

    do{
        scanf("%d",&a[i]);
        i++;
    }while(a[i-1] != 0);

    printf("PERFECTION OUTPUT\n");

    for(m=0; a[m]!=0; m++)
    {
        total=0;

        for(n=1; n< a[m] ; n++)
        {
            if(a[m] % n==0)
            {
                total=total + n;
            }
        }

        if(total == a[m])
            printf("%5d  PERFECT",a[m]);
        else if(total > a[m])
            printf("%5d  ABUNDANT",a[m]);
        else
            printf("%5d  DEFICIENT",a[m]);

        printf("\n");
    }

    printf("END OF OUTPUT\n");

    return 0;
}
