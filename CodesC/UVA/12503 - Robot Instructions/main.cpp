#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int testCase, noInstruction;
    int i, position, len;
    char command[105][15];

    //cin >> testCase;
	scanf("%d", &testCase);

    while(testCase--){
        //cin >> noInstruction;
        //cout << "aaa" << endl;
		scanf("%d", &noInstruction);
        position = 0;
        getchar();

        for(i=0 ; i< noInstruction ; i++){

			//getchar();

            gets(command[i]);
            //puts(command[i]);

            if ( (strcmp(command[i],"LEFT")) && (strcmp(command[i],"RIGHT")) ){
                len = strlen(command[i]);
                len = command[i][len-1] - 48;
                //cout << len << endl;

                strcpy(command[i], command[ len-1 ]);
            }

            if(!strcmp(command[i],"LEFT")){
                position--;
            }
            if(!strcmp(command[i], "RIGHT")){
                position++;
            }
            //cout << position << endl;
        }

        cout << position << endl;
    }
    return 0;
}
