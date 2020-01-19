#include <iostream>

using namespace std;

class coord{
    int x, y;
public:
    coord(int i=0, int j=0){
        x = i;
        y = j;
    }
    coord operator+(coord &ob2);
    coord operator+ ();
    void show(){
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;
    }
};

coord coord :: operator+ (coord &ob2){
    coord temp;

    temp.x = x + ob2.x;
    temp.y = y + ob2.y;

    return temp;
}

coord coord :: operator+ (){
    if(x<0)
        x = -x;
    if(y<0)
        y = -y;

    return *this;
}

void showObjects(coord &ob1, coord &ob2, coord &ob3){
    cout << "c1 is:" << endl;
    ob1.show();
    cout << "c2 is:" << endl;
    ob2.show();
    cout << "c3 is:" << endl;
    ob3.show();
}

int main()
{
    coord c1(10,20), c2(-99,-60), c3;


    showObjects(c1, c2, c3);
    c3 = c1 + c2;
    showObjects(c1, c2, c3);
    c3 = +c3;
    showObjects(c1, c2, c3);
    return 0;
}
