#include <iostream>

using namespace std;

class Coordination{
    int x, y;
public:
    Coordination(int i=0, int j=0){
        x = i;
        y = j;
    }
    Coordination operator++();
    Coordination operator++(int );
    void show(){
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;

    }
};

Coordination Coordination :: operator++ (){
    x = x + 1;
    y = y + 1;

    return *this;
}

Coordination Coordination :: operator++(int notUsed){
    x = x + 1;
    y = y + 1;

    return *this;
}


int main()
{
    Coordination c1 = Coordination(10,20);
    Coordination c2 = Coordination(55,55);

    cout << "at the beginning:" << endl;
    cout << "c1 is :" << endl;
    c1.show();
    cout << "c2 is :" << endl;
    c2.show();

    cout << "at the time of pre increment:" << endl;
    (++c1).show();
    (++c2).show();

    cout << "after pre increment" << endl;
    cout << "c1 is :" << endl;
    c1.show();
    cout << "c2 is :" << endl;
    c2.show();

    cout << "at the time of post increment:" << endl;
    (c1++).show();
    (c2++).show();

    cout << "after post increment:" << endl;
    cout << "c1 is :" << endl;
    c1.show();
    cout << "c2 is :" << endl;
    c2.show();



    return 0;
}
