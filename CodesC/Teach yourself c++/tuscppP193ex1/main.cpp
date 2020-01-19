#include <iostream>

using namespace std;

void order(int &a, int &b){
    if(b>a){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "ur numbers are :" << x << "  " << y << endl;

    order(x, y);

    cout << "ur numbers are :" << x << "  " << y << endl;

    return 0;
}
