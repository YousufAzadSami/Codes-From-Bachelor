#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,move,c1,c2,c3,c4;
    char str[5];

    scanf("%d",&n);

    getchar();

    for(i=0; i<n ; i++)
    {
        gets(str);

        move=8;

        c1=c2=c3=c4=0;


        /*
        if(!(str[0]>='c' && str[0]<= 'f'))
            move-=2;

        if(!(str[1] >= '3' && str[1] <= '6'))
            move-=2;

        */
        if(str[0]=='a' || str[0]=='h')
        {
            move = move - 4;
            c1=1;
        }
        else if(str[0]=='b' || str[0]=='g')
        {
            move = move - 2;
            c2=1;
        }



        if(str[1]=='1' || str[1]=='8')
        {
            move = move - 4;
            c3=1;
        }
        else if(str[1]=='2' || str[1]=='7')
        {
            move = move - 2;
            c4=1;
        }


        if(c1==1 && c3==1)
            move = move + 2;

        else if(c1==1 && c4==1)
            ++move;
        else if(c3==1 && c2 ==1)
            ++move;



        printf("%d\n",move);

        //getchar();

    }

	return 0;
}
