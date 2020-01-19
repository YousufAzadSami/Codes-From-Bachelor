#include <iostream>

using namespace std;

class coord{
    int x, y;
public:
    coord(int i=0, int j=0){
        x = i;
        y = j;
    }
    friend coord operator-- (coord &ob);
    friend coord operator-- (coord &, int notUsed);

    void show(){
        cout << "x is: " << x << endl;
        cout << "y is: " << y << endl;
    }
};

coord operator-- (coord &ob){
    ob.x = ob.x - 1;
    ob.y = ob.y - 1;

    return ob;
}
coord operator-- (coord &ob, int notUsed){
    ob.x = ob.x - 1;
    ob.y = ob.y - 1;

    return ob;
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
    coord c1(50,45) , c2(10,5), c3;

    showObjects(c1, c2, c3);
    cout << endl;
    c1--;
    c2--;
    c3--;
    showObjects(c1, c2, c3);
    cout << endl;
    --c1;
    --c2;
    --c3;
    showObjects(c1, c2, c3);
    cout << endl;
    return 0;
}
