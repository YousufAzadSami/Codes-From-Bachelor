#include <iostream>

using namespace std;

void Xhandler(int test){
    try{
        cout << "inside try\n";
        if(test==3)
            throw test;
        if(test==4)
            throw 'a';
        cout << "this will not execute in case of error\n";
    }
    catch(int i){
        cout << "caught one error, number: " << test << endl;
    }
    catch(char a){
        cout << "caught one error, number: " << a << endl;
    }
}

int main()
{
    cout << "start\n\n";

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);
    Xhandler(4);

    return 0;
}
