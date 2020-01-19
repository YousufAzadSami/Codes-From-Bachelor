#include <iostream>

using namespace std;

void Xhandler(int test){
    try{
        cout << "start of try\n\n";
        if(test == 0)
            throw test;
        if(test == 1)
            throw 'a';
        if(test == 2)
            throw 123.234;
        cout << "if error doesnt occur, this will be printed\n\n";
    }
    catch(...){
        cout << "gotta catch em all!\n\n\n";
    }
}

int main()
{
    cout << "in main, before xHandler\n" << endl;

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);
    Xhandler(4);

    return 0;
}
