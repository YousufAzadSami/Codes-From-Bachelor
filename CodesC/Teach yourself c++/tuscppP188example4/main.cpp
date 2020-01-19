#include <iostream>

using namespace std;

int f(int a, int b){
    return  a*a;
}

int f(int a, int b, int c=0){
    return a*b;
}

int main()
{
    cout << f(10, 12, 14) << endl;        //  CALLS f(int , int)
    cout << f(10, 12) << endl;           //  CALL f(int) or f(int , int)
    return 0;
}
