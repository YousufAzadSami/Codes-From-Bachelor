#include <iostream>

using namespace std;

class coord{
    int x, y;
public:
    coord(int i=0 ,int j=0){
        x = i;
        y = j;
    }
    int operator<(coord &ob2);
    bool operator>(coord ob2);
};

int coord :: operator< (coord &ob2){
    return ((x<ob2.x) && (y<ob2.y));
}
bool coord :: operator> (coord ob2){
    return ((x>ob2.x) && (y>ob2.y));
}


int main()
{
    coord c1(10,20), c2(100,200), c3;

    if(c1>c2)
        cout << "c1 is greater than c2" << endl;
    if(!(c2<c1))
        cout << "c2 is greater than c1" << endl;
    return 0;
}
