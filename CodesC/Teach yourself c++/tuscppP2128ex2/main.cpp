#include <iostream>

using namespace std;

class coord{
    int x, y;
public:
    coord(int i=0, int j=0){
        x = i;
        y = j;
    }
    coord operator* (coord &ob2);
    friend coord operator* (coord &ob1, int );
    friend coord operator* (int , coord &ob2);

    void show(){
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;
    }
};

coord coord :: operator* (coord &ob2){
    coord temp;

    temp.x = x * ob2.x;
    temp.y = y * ob2.y;

    return temp;
}

coord operator* (coord &ob1, int i){
    coord temp;

    temp.x = ob1.x * i;
    temp.y = ob1.y * i;

    return temp;
}

coord operator* (int i, coord &ob2){
    coord temp;

    temp.x = i * ob2.x;
    temp.y = i * ob2.y;

    return temp;
}
void showObjects(coord &ob1, coord &ob2, coord &ob3){
    cout << "object c1:" << endl;
    ob1.show();
    cout << "object c2:" << endl;
    ob2.show();
    cout << "object c3:" << endl;
    ob3.show();
}

int main()
{
    coord c1(50, 40), c2(5,10), c3;

    showObjects(c1, c2, c3);
    cout << endl;
    c3 = c1 * c2;

    showObjects(c1, c2, c3);
    cout << endl;

    c3 = c1 * 5;

    showObjects(c1, c2, c3);
    cout << endl;

    c3 = 10 * c1;

    showObjects(c1, c2, c3);
    cout << endl;
    return 0;
}
