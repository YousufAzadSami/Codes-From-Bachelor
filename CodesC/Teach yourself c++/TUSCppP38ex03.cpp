#include<iostream>

using namespace std;

/*
int min(int , int);
int min(double , double);
*/



int min(int a, int b){
    cout<< "min is:" << a;
}
int min(double a, double b){
    cout<< "min is:" << b;
}


int main(){
    int a, b;

    cin>>a>>b;

    min(a,b);
    cout<<endl;
    min( 1.035, 6.66  );

}
