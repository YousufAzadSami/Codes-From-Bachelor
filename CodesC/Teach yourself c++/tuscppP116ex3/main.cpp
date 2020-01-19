#include <iostream>

using namespace std;

class base{
    int a;
public:
    void loadA(int n){
        a = n;
    }
    int getA(){
        return a;
    }
};

class derived : public base{
    int b;
public:
    void loadB(int n){
        b = n;
    }
    int getB(){
        return b;
    }
};

int main()
{
    derived d;

    d.loadA(10);

    cout << "element of base " << d.getA() << endl;

    return 0;
}
