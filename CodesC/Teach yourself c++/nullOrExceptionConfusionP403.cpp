#include<iostream>
//#include<new>
using namespace std;

int main(){
    double *p;
    int i = 0;

    //p = new(nothrow) int(10);
    do{
        try{
            p = new double[100000];
        }catch(bad_alloc excep){
            cout << "allocation FUCK ing error\n";
            //return 1;                             //                <----------------------- return 1 does the trick, nt *p
        }
        cout << "allocation ok " << ++i << " \n";
    }while(p);

    if(p == NULL){
        cout << "this shouldn't happen! either it should return an exception or null, but not BOTH\n\n";
    }else{
        cout << "so how the loop stopped??   :?\n\n";
    }

    return 0;
}
