#include <iostream>
//#include <new>

using namespace std;

int main()
{
    cout << "program starts\n\n";

    double *p;

    do{
        try{
            p = new double[100000];
        }catch(bad_alloc){
            cout << "allocation failure, BAD_ALLOC!\n\n\n";
            return 1;
        }
        cout << "allocation OK\n";
    }while(p);

    cout << "program ends\n\n";
    return 0;
}
