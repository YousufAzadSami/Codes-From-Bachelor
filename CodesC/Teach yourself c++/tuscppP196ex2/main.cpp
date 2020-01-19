#include <iostream>

using namespace std;

class myclass{
    int x, y;
public:
    myclass(int i=0, int j=0){
        x = i;
        y = j;
    }
    void show(){
        cout << "x is:" << x << endl;
        cout << "y is:" << y << endl;
    }
};

int main()
{
    myclass mc1, mc2(5,10);

    mc1.show();
    mc2.show();

    return 0;
}
