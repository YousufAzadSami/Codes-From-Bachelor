#include <iostream>

using namespace std;

template <class typeX>
void swapValues( typeX &a, typeX &b){
    typeX temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i,j;

    i=10;
    j=99;

    cout << "i: " << i << endl << "j: " << j << endl << endl;
    swapValues(i,j);
    cout << "i: " << i << endl << "j: " << j << endl << endl;


    float x, y;

    x = 1.0111;
    y = 89.5964;

    cout << "x: " << x << endl << "y: " << y << endl << endl;
    swapValues(x, y);
    cout << "x: " << x << endl << "y: " << y << endl << endl;

    return 0;
}
