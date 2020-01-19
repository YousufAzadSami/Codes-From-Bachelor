#include <iostream>

using namespace std;

void Xhandler(int test) throw(int, char, double)
{
    if(test == 0) throw test;
    if(test == 1) throw 'a';
    if(test == 2) throw 123.23;
    cout << test << " its finished" << endl;
}

int main()
{
    cout << "start\n\n" << endl;

    try{
        cout << "try starts\n";
        //Xhandler(0);
        Xhandler(5);
        Xhandler(0);
        cout << "try ends\n";
    }
    catch(int i){
        cout << "caught int\n";
    }
    catch(char c){
        cout << "caught char\n";
    }
    catch(double d){
        cout << "caught double\n";
    }

    cout << "endl" << endl << endl;
    return 0;
}
