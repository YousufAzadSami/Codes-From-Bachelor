#include <iostream>

using namespace std;

class base{
public:/*
    virtual void func(){
        cout << "using base version of func\n\n";
    }
    */
    virtual void func() = 0;
};

class derived1 : public base{
public:
    /*
    void func(){
        cout << "using derived1's version of the func\n\n";
    }
    */
};

class derived2 : public derived1{
public:

    void func(){
        cout << "using derived2's version of the func\n\n";
    }

};

int main()
{
    base *bp;

    //base b;
    derived1 d1;
    derived2 d2;

    //b.func();
    d1.func();
    d2.func();
    return 0;
}
