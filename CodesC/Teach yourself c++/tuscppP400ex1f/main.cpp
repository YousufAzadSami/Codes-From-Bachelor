#include <iostream>

using namespace std;

int main()
{
    cout << "start of program\n\n";

    try{
        cout << "OUTER try starts\n\n";
        try{
            cout << "INNER try starts\n\n";
            throw "hello";
        }
        catch(char *a)
        {
            cout << "caught char from INNER try\n\n";
            throw;
        }
    }
    catch(char *a){
        cout << "caught char from OUTER try\n\n";
    }
    return 0;
}
