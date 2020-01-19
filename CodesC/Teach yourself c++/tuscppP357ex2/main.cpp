#include <iostream>

using namespace std;

class dist{
    double d;
public:
    int getD(){
        return d;
    }
    void setD(int d){
        this-> d = d;
    }
    virtual void trav_time(){
        cout << "in base: " << getD()/60 << endl;
    }
};

class metric : public dist{
public:
    void trav_time(){
        cout << "in metric: " << getD()/100 << endl;
    }
};
int main()
{
    dist *dp;

    dist dOb;
    metric mOb;

    dOb.setD(56123.23);
    mOb.setD(16000.569)        ;

    dp = &dOb;
    dp -> trav_time();

    dp = &mOb;
    dp -> trav_time();

    return 0;
}
