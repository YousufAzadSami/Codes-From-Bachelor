#include<stdio.h>
#include<string.h>

int main()
{
    int testCase, len,i,j;
    char str1[105], str2[105];
    int flag;

    scanf("%d", &testCase);

    for(int testCounter=1; testCounter<=testCase; testCounter++)
    {
        getchar();

        gets(str1);
        gets(str2);

        len = strlen(str1);

        if(strlen(str1) != strlen(str2))
            printf("Case %d: No\n", testCounter);

        else
        {
            for(i=0; i<len; i++)
            {
                flag=0;

                for(j=0; j<len; j++)
                {
                    if(str1[i] == str2[j])
                    {
                        flag=1;
                        break;
                    }
                }

                if(flag == 0)
                {
                    printf("Case %d: No\n", testCounter);
                    break;
                }

            }

            if(i==len)
                printf("Case %d: Yes\n", testCounter);
        }
    }

    return 0;
}
