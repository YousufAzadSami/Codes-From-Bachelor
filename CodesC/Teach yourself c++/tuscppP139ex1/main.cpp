#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    char *p;

    p = new char[100];
    //p = (char *)malloc(100);

    strcpy(p , "This is a copy of a copy");

    cout << p << endl;

    return 0;
}
