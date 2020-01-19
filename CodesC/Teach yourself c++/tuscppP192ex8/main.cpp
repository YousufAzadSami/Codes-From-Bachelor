#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


char *reverse(char *s, int len = 0){
    int i, j;

    if(len == 0){
        len = strlen(s);
    }
    char *c = new char[100];

    for(i=len-1,j=0 ; i>=0 ; i--,j++){
        c[j] = s[i];
    }
    c[len] = NULL;

    return c;
}

int main()
{
    char *str;
    str = new char[100];

    cout << "enter ur string" << endl;
    //cin >> str;
    gets(str);


    cout << endl << "ur string is" << endl << str;

    str = reverse(str);

    cout << endl << "ur reversed string is" << endl << str;

    str = reverse(str,6);

    cout << endl << "ur reversed string is" << endl << str;
    return 0;
}
