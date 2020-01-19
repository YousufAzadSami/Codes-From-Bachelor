#include <iostream>

using namespace std;

void Xtest(int test){
    cout << "inside Xtest, number is : " << test << endl;
    if(test==2){
        throw test;
    }
    cout << "this will not execute in case of error\n";
}

int main()
{
    cout << "start\n\n";

    try{
        cout << "inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
        Xtest(3);
        Xtest(4);
    }
    catch(int i){
        cout << "caught an error, number: " << i << endl << endl;
    }

    cout << "end\n\n\n";
    return 0;
}
