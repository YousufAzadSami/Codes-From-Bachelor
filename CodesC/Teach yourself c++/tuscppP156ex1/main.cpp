#include <iostream>

using namespace std;

class AType{
    double a, b;
public:
     AType(double x, double y){
        a = x;
        b = y;
     }
     void show(){
        cout << a << ' ' << b << endl;
     }
};

int main()
{
    AType a[2][5] = {
                    AType(1,2), AType(3,4),
                    AType(5,6), AType(7,8),
                    AType(9,10), AType(11,12),
                    AType(13,14), AType(15,16),
                    AType(17,18), AType(19,20),
                    };

    AType *p;

    //p = (AType *)a;
    p = (AType *)a;

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            p->show();
            p++;
        }
        cout << endl;
    }

    return 0;
}
