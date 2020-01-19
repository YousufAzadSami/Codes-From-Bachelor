#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char line_1[20],line_2[20];
    int line_matrix[20][20];
    FILE *fp;

    if((fp = fopen("LCS_IN.txt", "r"))==NULL) {
    printf("Cannot open file.\n");
    }

    fscanf(fp,"%s",line_1);
    fscanf(fp,"%s",line_2);

    int length_1=strlen(line_1);
    int length_2=strlen(line_2);

    printf("First String: %s\n\nSecond String: %s\n\n",line_1,line_2);

    int i,j,p=length_1*length_2;
    char symbol_matrix[100][2];

    for(i=0;i<=length_1;i++)
        line_matrix[0][i]=0;

    for(i=1;i<=length_2;i++)
        line_matrix[i][0]=0;

    int q=1;

    for(i=1;i<=length_2;i++)
    {
        for(j=1;j<=length_1;j++)
        {
            if(line_2[i-1]==line_1[j-1])
            {
                line_matrix[i][j]=line_matrix[i-1][j-1]+1;

                symbol_matrix[q][0]=line_1[j-1];

                symbol_matrix[q][1]='c';

                if(q<=p) q++;
            }
            else if(1)
            {
                if(line_matrix[i-1][j]>=line_matrix[i][j-1])
                {
                    line_matrix[i][j]=line_matrix[i-1][j];

                    symbol_matrix[q][0]=line_1[j-1];

                    symbol_matrix[q][1]='u';

                     if(q<=p) q++;
                }
                else if(1)
                {
                    line_matrix[i][j]=line_matrix[i][j-1];

                    symbol_matrix[q][0]=line_1[j-1];

                    symbol_matrix[q][1]='l';

                     if(q<=p) q++;
                }
            }
        }
    }

    printf("The String Matrix:\n\n");

    for(i=0;i<=length_2;i++)
    {   for(j=0;j<=length_1;j++)
        {
            printf("%d\t",line_matrix[i][j]);
        }
        printf("\n\n");
    }
    printf("The Symbol Matrix:\n\n");

    for(i=1;i<=p;i++)
    {
        {
            printf("%c\t%c",symbol_matrix[i][0],symbol_matrix[i][1]);
        }
        printf("\n");
    }

    char lcs[20];
    int n=0;
    int m=length_1;
    for(i=p;i>=0;i--)
    {
         if(symbol_matrix[i][1]=='c')
         {
             lcs[n]=symbol_matrix[i][0];
             //i=i-6;
             i=i-m;
             n++;
             if(i<0) break;
         }
         else if(symbol_matrix[i][1]=='u')
         {
             //i=i-5;
             i=i-m-1;
             if(i<0) break;
         }
         else if(symbol_matrix[i][1]=='l')
         {
            if(i<0) break;
         }
         else if(i==0)
         {
             break;
         }

    }
    char final_lcs[20];

    int charecter_in_lcs=line_matrix[length_2][length_1];

    printf("\nCharecters in LCS: %d\n",charecter_in_lcs);

    for(i=0;i<charecter_in_lcs;i++)
    {
        final_lcs[i]=lcs[i];
    }

    strrev(final_lcs);

    printf("\n\nLongest Common Subsequence is: ");

    for(i=0;i<strlen(final_lcs);i++)
        printf("%c",final_lcs[i]);

    printf("\n\n");

    return 0;
    getch();
}
