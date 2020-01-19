#include <iostream>

using namespace std;

class samp{
    int a;
public:
    samp(int n){
        a= n;
    }
    int getA(){
        return a;
    }
};

int main()
{
    int i, j;

    samp s[4][2] = { samp(1), samp(2),
                    samp(3), samp(4),
                    samp(5), samp(6),
                    samp(7), samp(8)
                    };

    samp *p;
    // FOR SOME REASON IT IS WORONG!!! :o
    //p = s;
    /////////////////////////////////////
    p = (samp *) s;

    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            cout << p->getA() << " ";
            p++;
        }
        cout << endl;
    }

    return 0;
}
