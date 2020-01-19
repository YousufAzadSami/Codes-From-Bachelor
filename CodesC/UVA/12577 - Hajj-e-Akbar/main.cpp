#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str[10];
    int i=1;

    while(true){
        gets(str);

        if(str[0] == '*'){
            break;
        }

        if(!strcmp(str, "Hajj")){
            printf("Case %d: Hajj-e-Akbar", i);
        }else if(!strcmp(str, "Umrah")){
            printf("Case %d: Hajj-e-Asghar", i);
        }
        printf("\n");
        i++;
    }
    return 0;
}
