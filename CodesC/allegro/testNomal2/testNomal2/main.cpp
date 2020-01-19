#include <iostream>

using namespace std;

class myclass{
    int a, b;
public:
    myclass(int n, int m){
        this->a = n;
        this->b = m;
    }
    int add(){
        return (this->a + this->b);
    }
    void show();
};

void myclass :: show(){
    int t;
    t= this->add();             // MISSED THIS MEMBER FUNCTION
    cout << t << endl;
}
int main()
{
    myclass ob1(10, 14);

    myclass ob2 = myclass(11,15);
    ob2.show();

    return 0;
}
