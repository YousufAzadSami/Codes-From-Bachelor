#include <iostream>

using namespace std;

class Base{
public:
    int i;
};

class derived1 : virtual public Base{
public:
    int j;
};

class derived2 : virtual public Base{
public:
    int k;
};

class derived3 : public derived1, public derived2{
public:
    int product(){
        return i*j*k;
    }
};

int main()
{
    derived3 ob;

    ob.i = 10;
    ob.j = 3;
    ob.k = 5;

    cout << "product is: " << ob.product() << endl;

    return 0;
}
