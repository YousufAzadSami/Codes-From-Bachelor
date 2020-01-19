#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];
    char b[100][100];
    int c[100][100];
	int i,j;

    printf("First string:");
    gets(str1);
    printf("second string:");
    gets(str2);

	printf("\n\n");

    int m= strlen(str1);
    int n= strlen(str2);

    // initializing first row of c to 0
    for(i=1;i<m;i++){
		c[i][0]=0;
	}
	// initializing first coloum of c to 0
    for(j=0;j<n;j++){
		c[0][j]=0;
	}

    // callibraing the index of string 1
    for( i=m-1;i>=0;i--)
    {
        str1[i+1]=str1[i];
    }
    // callibraing the index of string 2
    for( i=n-1;i>=0;i--)
    {
        str2[i+1]=str2[i];
    }

    // initializing the char matrix to "."
    for( i=0;i<=m;i++)
    {
        for( j=0;j<=n;j++)
        {
            b[i][j]='.';
        }
    }


    // main algorithm
    for( i=1;i<=m;i++)
    {
        for( j=1;j<=n;j++)
        {
            if(str1[i]==str2[j])
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

	// printing num matrix
    for( i=0;i<=m;i++)
    {
        for( j=0;j<=n;j++){
			printf("%2d",c[i][j]);
		}
        printf("\n");
    }

    printf("\n\n\n\n");

	// printing char matrix
    for( i=0;i<=m;i++)
    {
        for( j=0;j<=n;j++){
			printf("%2c",b[i][j]);
		}
        printf("\n");
    }
}
