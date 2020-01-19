#include<stdio.h>

int main()
{
    int testCase, walls[55], noOfWalls, highJump, lowJump;

    scanf(" %d", &testCase);

    //while(testCase--)
    for(int n=1; n<=testCase; n++)
    {
        scanf(" %d", &noOfWalls);
        highJump = lowJump = 0;

        for(int i=0; i<noOfWalls ; i++)
        {
            scanf(" %d", &walls[i]);

            if( i != 0)
            {
                if( walls[i]>walls[i-1])
                    highJump++;
                else if(walls[i]<walls[i-1])
                    lowJump++;
            }
        }


        /*

        for(int i=0 ; i< noOfWalls -1; i++)
        {
            if(walls[i]<walls[i+1])
                highJump++;
            else if(walls[i]>walls[i+1])
                lowJump++;
        }

        */

        printf("Case %d: %d %d\n",n , highJump, lowJump );


    }



    return 0;
}
