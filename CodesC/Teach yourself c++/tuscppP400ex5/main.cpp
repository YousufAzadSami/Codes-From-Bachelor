#include <iostream>

using namespace std;

double divide(double a, double b){
    try{
        if(b==0)
            throw 0;
        else
            return a/b;
    }
    catch(int i){
        cout << "this is an error, o error\n";
        //return;
    }
}

int main()
{
    double a, b;

    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;

    cout << "calling divide\n";
    divide(a,b);
    return 0;
}
