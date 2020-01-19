#include <iostream>

using namespace std;

class base{
    int x;
public:
    void setx(int i){
        x = i;
    }
    int getx(){
        return x;
    }
};

class derive : public base{
    int y;
public:
    void sety(int i){
        y = i;
    }
    int gety(){
        return y;
    }
};

int main()
{
    base *p;

    base bOb;
    derive dOb;

    p = &bOb;
    p->setx(10);
    cout << "base object x: " << p->getx() << endl;

    p = &dOb;
    p -> setx(99);
    cout << "from derive object x: " << p->getx() << endl << endl;


    dOb.sety(123);
    cout << "from pointer, base x is: " << p->getx() << endl;
    cout << "form object , derived x, y is: " << p->getx() << ' ' << dOb.gety() << endl;

    //derive *dp;
    //dp = &d
    return 0;
}
