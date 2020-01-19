#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[1005], firstLetter;
    int flag;

    while(1)
    {
        gets(str);
        flag=1;
        int len= strlen(str);


        //checking the first letter
        for(int i=0; i<len; i++)
        {
            if(( toupper(str[i])>='A' && toupper(str[i])<='Z' ) || str[i]=='*' )
            {
                firstLetter = toupper(str[i]);
                break;
            }
        }

        if(firstLetter == '*')
            break;


        for(int i=1; i<len; i++)
        {
            if(( toupper(str[i])>='A' && toupper(str[i])<='Z' ) && str[i-1]==' ')
            {
                if(toupper(str[i])!=firstLetter)
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==1)
            printf("Y\n");
        else
            printf("N\n");

    }

    return 0;

}
