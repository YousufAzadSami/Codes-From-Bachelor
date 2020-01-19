#include <iostream>

using namespace std;

class samp{
    int a, b;
public:
    samp(int n, int m){
        a = n;
        b = m;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
};
int main()
{
    samp s[4] = { samp(1,2), samp(3,4), samp(5,6), samp(7,8),};
    samp *p;

    p = s ;

    for(int i = 3; i>=0 ;i--){
        //cout << "a: " << p->getA() << " b: " << p->getB() << endl;
        cout << "a: " << (p+i)->getA() << " b: " << (p+i)->getB() << endl;
        //p++;
    }
    return 0;
}
