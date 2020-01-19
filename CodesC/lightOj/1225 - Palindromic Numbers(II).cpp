#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int testCase,i,j,len;

    scanf("%d", &testCase);
	getchar();

    for(int t=1; t<=testCase; t++)
    {
		
        gets(a);
	//	getchar();


		len = strlen(a) - 1;

        for(i=0,j=len ; i<= (len/2) ; i++,j--)
        {
            if(a[i] != a[j])
            {
                printf("Case %d: No", t);
				break;
            }
        }

        if(i == (len/2) +1)
            printf("Case %d: Yes", t);


        printf("\n");		

 
    }


    return 0;
}
