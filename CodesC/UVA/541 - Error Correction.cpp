#include<stdio.h>

int main()
{
    int a[101][101], i, j, coloum[100], row[100], n, xIntersection, yIntersection, rowCount, coloumCount;

    while(1)
    {
        scanf(" %d",&n);

        if(n==0)
            break;

        // data input
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf(" %d",&a[i][j]);
            }
        }

        //row coloun addition
        rowCount =0;
        coloumCount =0;

        for(i=0;i<n;i++)
        {
            row[i] = 0;

            for(j=0;j<n;j++)
            {
               row[i] += a[i][j];
            }

            if(row[i]%2 ==1)
            {
                ++rowCount;
                if(rowCount>1)
                    break;
                xIntersection=i;
            }
        }

        for(j=0;j<n;j++)
        {
            coloum[j] = 0;

            for(i=0;i<n;i++)
            {
               coloum[j] += a[i][j];
            }

            if(coloum[j]%2 ==1)
            {
                ++coloumCount;
                if(coloumCount>1)
                    break;
                yIntersection=j;
            }
        }

        if(rowCount==0 && coloumCount ==0)
        {
            printf("OK\n");
        }

        else if(rowCount==1 && coloumCount ==1)
        {
            printf("Change bit (%d,%d)\n", xIntersection+1, yIntersection+1);
        }

        else
        {
            printf("Corrupt\n");
        }




    }

    return 0;
}
