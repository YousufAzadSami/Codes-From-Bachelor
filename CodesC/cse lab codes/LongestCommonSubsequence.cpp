#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char string1[100];
    char string2[100];
    char b[100][100];
    int c[100][100];

    printf("Enter 1st string:");
    gets(string1);
    printf("Enter 2nd string:");
    gets(string2);

    int m= strlen(string1);
    int n= strlen(string2);

    for(int i=1;i<m;i++)c[i][0]=0;
    for(int j=0;j<n;j++)c[0][j]=0;


    for(int i=m-1;i>=0;i--)
    {
        string1[i+1]=string1[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        string2[i+1]=string2[i];
    }

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)b[i][j]='.';
    }


    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(string1[i]==string2[j])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='\\';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='|';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='-';
            }
        }
    }


    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)printf("%d",c[i][j]);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)printf("%c",b[i][j]);
        printf("\n");
    }
}
