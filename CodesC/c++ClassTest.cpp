#include<iostream>
using namespace std;

class myclass{
    int a;
    public:
        void setA(int num);
        int getA();
};

int  myclass :: getA(){
    return a;
}
void myclass :: setA(int num){
    a = num;
}

int main(){

    myclass ob1, ob2;

    ob1.setA(10);
    ob2.setA(99);

    cout << "in ob1, a is : " << ob1.getA() << "\n";
    cout << "in ob2, a is : " << ob2.getA() << "\n";

    return 0;
}
