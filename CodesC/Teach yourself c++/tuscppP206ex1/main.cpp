#include <iostream>

using namespace std;

class Coordination{
    int x, y;
public:
    Coordination(int i=0, int j=0){
        x = i;
        y = j;
    }
    void show(){
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;
    }
    Coordination operator+ (Coordination ob);
    Coordination operator* (Coordination &ob);
    Coordination operator/ (Coordination ob);
};


Coordination Coordination :: operator+ (Coordination ob){
    Coordination temp;

    temp.x = x + ob.x;
    temp.y = y + ob.y;

    return temp;
}

Coordination Coordination :: operator* (Coordination &ob){
    Coordination temp;

    temp.x = x * ob.x;
    temp.y = y * ob.y;

    return temp;
}

Coordination Coordination :: operator/ (Coordination ob){
    Coordination temp;

    temp.x = x / ob.x;
    temp.y = y / ob.y;

    return temp;
}

void objectsShow(Coordination &ob1, Coordination &ob2, Coordination &ob3){

    cout << "showing c1:" << endl;
    ob1.show();
    cout << "showing c2:" << endl;
    ob2.show();
    cout << "showing c3:" << endl;
    ob3.show();
}

int main()
{
    Coordination c1 = Coordination(10,20);
    Coordination c2 = Coordination(35,45);
    Coordination c3 = Coordination();

    c3 = c1 + c2;
    objectsShow(c1, c2, c3);

    cout << endl;

    c3 = c1 * c2;
    objectsShow(c1, c2, c3);

    cout << endl;

    c3 = c1 / c2;
    objectsShow(c1, c2, c3);

    return 0;
}
