#include <iostream>

using namespace std;

class coord{
    int x, y;
public:
    coord(int i=0, int j=0){
        x = i;
        y = j;
    }
    friend coord operator-(coord &ob);
    friend coord operator/(coord &ob1, coord &ob2);

    void show(){
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;
    }
};

coord operator- (coord &ob){
    ob.x = - ob.x;
    ob.y = - ob.y;

    return ob;
}

coord operator/ (coord &ob1, coord &ob2){
    coord temp;

    temp.x = ob1.x / ob2.x;
    temp.y = ob1.y / ob2.y;

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
    coord c1(100,200) , c2(10,20), c3;

    showObjects(c1, c2, c3);

    c3 = c1 / c2;

    showObjects(c1, c2, c3);

    c1 = -c1;
    c2 = -c2;
    c3 = -c3;

    showObjects(c1, c2, c3);

    return 0;
}
