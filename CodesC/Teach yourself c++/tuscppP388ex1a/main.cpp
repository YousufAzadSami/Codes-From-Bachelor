#include <iostream>

using namespace std;

int main()
{
    cout << "first try begins" << endl << endl;

    try{
        cout << "inside try\n";
        throw 10;
        cout << "after throw\n";
    }
    catch(int i){
        cout << "exception cought: " << i << endl;
    }

    cout << "second try begins: \n\n";

    try{
        cout << "inside try\n";
        throw 101;
        cout << "after throw\n";
    }
    catch(int i){
        cout << "exception cought: " << i << endl;
    }

    cout << "end of program\n\n";
    return 0;
}
