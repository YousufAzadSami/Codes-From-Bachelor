#include<stdio.h>

int sorting(int a[])
{
    int temp, i, j;

    for(i=0;i<2;i++)
    {
        for(j=i;j<3;j++)
        {
            if( a[j]<a[i] )
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }


    }

    return a[1];
}

int main()
{
    int a[3],testCase;

    scanf(" %d",&testCase);
    //printf("your testCase is %d\n",testCase);

    for(int counter=1; counter<=testCase; counter++)
    {
        //printf("1.getting input for i=%d\n",counter);

        scanf(" %d %d %d", &a[0], &a[1], &a[2]);

        //printf("2.getting input for i=%d\n",counter);

        int ans=sorting(a);

        //printf("3.getting input for i=%d\n",counter);

        printf("Case %d: %d\n",counter,ans);

    }


    return 0;
}
