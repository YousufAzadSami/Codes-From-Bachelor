#include <iostream>

using namespace std;

int f(int a, int b){
    return a+b;
}

// WHICH FUNTION WILL BE CALLED
// THIS IS HNHERENTLY AMBIGUOUS

int f(int a, int &b){
    return a-b;
}

int main()
{
    int x = 1;
    int y = 2;

    cout << f(x, y) << endl;
    return 0;
}
