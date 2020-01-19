#include <iostream>
#include <typeinfo>

using namespace std;

class baseClass{
    virtual void f(){
        cout << "inside base :D\n";
    }
};

class derived_21 : public baseClass {
    void f(){
        cout << "inside derived 2.1\n";
    }
};

class derived_22 : public baseClass{
    void f(){
        cout << "inside derived 2.2\n";
    }
};

class derived_32 : public derived_22{
    void f(){
        cout << "inside derived 3.2 which is derived form 2.2\n";
    }
};

int main()
{
    int i, *ip;
    double d = 1234.1234;
    baseClass b, *bp;
    derived_21 d21;
    derived_22 d22;
    derived_32 d32;

    cout << "the typeID of int is : " << typeid(i).name() << endl;
    cout << "the typeID of ip is : " << typeid(ip).name() << endl;
    cout << "the typeID of *ip is : " << typeid(*ip).name() << endl;
    cout << "the typeID of double is : " << typeid(d).name() << endl;
    cout << "the typeID of base class is : " << typeid(b).name() << endl;
    cout << "the typeID of base class is : " << typeid(baseClass).name() << endl;
    cout << "the typeID of derived 2.1 class is : " << typeid(d21).name() << endl;
    cout << "the typeID of derived 2.2 class is : " << typeid(d22).name() << endl;
    cout << "the typeID of derived 3.2 class is : " << typeid(d32).name() << endl;

    cout << "\n\n";

    bp = &b;
    cout << "the typeID of base class is : " << typeid(*bp).name() << endl;
    bp = &d21;
    cout << "the typeID of derived 2.1 class is : " << typeid(*bp).name() << endl;
    bp = &d22;
    cout << "the typeID of derived 2.2 class is : " << typeid(*bp).name() << endl;
    bp = &d32;
    cout << "the typeID of derived 3.2 class is : " << typeid(*bp).name() << endl;

    // DOESN'T WORK
    /*
    type_info typeInfoObject;
    typeInfoObject = typeid(b);
    cout << "moment of truth: " << typeInfoObject.name() << endl;
    */

    cout << endl << endl;
    if(typeid(b) == typeid(d21))
        cout << "b and d21 are same\n\n";
    else
        cout << "b and d21 are NOT same\n\n";
    if(typeid(d21) == typeid(d22)){
        cout << "d21 and d22 are same \n\n";
    }else
        cout << "d21 and d22 are NOT same\n\n";

    if(typeid(d21) == typeid(d32))
        cout << "d21 and d32 are same\n\n";
    else
        cout << "d21 and d32 are NOT same\n\n";
    if(typeid(*bp) == typeid(d32))
        cout << "*bp and d32 are same\n\n";
    else
        cout << "*bp and d32 are NOT same\n\n";

    return 0;
}
