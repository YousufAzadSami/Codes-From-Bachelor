#include <iostream>

using namespace std;

class A{
    int a;
public:
    A(int aa){
        a = aa;
    }
    void showA(){
        cout << a << endl;
    }
};

class B{
    int b;
public:
    B(int bb){
        b = bb;
    }
    void showB(){
        cout << b << endl;
    }
};

class C : public A, public B{
    int c;
public:
    C(int aa, int bb, int cc) : A(aa), B(bb){
        c = cc;
    }
    void showC(){
        showA();
        showB();
        cout << c << endl;
    }
};

int main()
{
    A a(5);
    B b(10);
    C c(15, 20, 25);

    a.showA();
    cout << endl << endl;

    b.showB();
    cout << endl << endl;

    c.showC();
    cout << endl << endl;

    return 0;
}
