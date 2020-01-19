#include <iostream>

using namespace std;

class samp{
    int a;
public:
    samp(){
        a=0;
    }
    samp(int a){
        this->a = a;
    }
    int getA(){
        return a;
    }
};

int main()
{
    samp ob(88);
    samp obArray[10];

    cout << "ur normal initialized object :" << ob.getA() << endl;

    cout << endl << "uninitialized object:" << endl;
    for(int i=0;i<10;i++){
        cout << obArray[i].getA() << endl;
    }
    return 0;
}
