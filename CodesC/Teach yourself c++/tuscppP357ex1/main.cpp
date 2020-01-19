#include <iostream>

using namespace std;

class num{
    int i;
public:
    virtual void showNum(){
        cout << "in base: " << i << endl;
    }
    int getI(){
        return i;
    }
    void setI(int ii){
        i = ii;
    }
};

class outHex : public num{
public:
    void showNum(){
        //cout.unsetf(ios::dec);
        //cout.setf(ios::hex);
        cout << "in outHex: " << hex << getI() << endl;
    }
};

class outOct : public num{
public:
    void showNum(){
        cout << oct << "in outOct: " << getI() << endl;
    }
};
int main()
{
    num *np;

    num n;
    outHex oh;
    outOct oc;

    n.setI(100);
    oh.setI(101);
    oc.setI(102);

    np = &n;
    np->showNum();

    np = &oh;
    np->showNum();

    np = &oc;
    np->showNum();
    return 0;
}
