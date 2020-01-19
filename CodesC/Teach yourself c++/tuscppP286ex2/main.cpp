// HAVING SOME PRB WITH "LEFT" AND "RIGHT" JUSTIFIED THING EE

#include <iostream>
#include <cstring>

#define TOTAL_LINE_LENGTH 80

using namespace std;

void center(char *s){
    int len = strlen(s);
    int halfLen = len / 2;
    cout.width((TOTAL_LINE_LENGTH/2) + halfLen);
    cout << s << endl;

    cout.width(40);
    cout.setf(ios::left);
    cout << s << endl;

    cout.width(40);
    cout.setf(ios::right);
    cout << s << endl;
}

int main()
{
    //cout << "Hello world!" << endl;
    center("Hello world!");
    center("i am the madafuking king");

/*
    cout.width(40);
    cout<<endl<<endl;

    cout.setf(ios::left);
    cout << "this is madness" << endl;

    cout.setf(ios::right);
    cout << "this is madness" << endl;
*/
    return 0;
}
