#include <iostream>

using namespace std;

void neg(int *i){
    cout << "in function : POINTER" << endl;
    *i = - (*i);
}
void neg(int &i){
    cout << "in function : REFERENCE" << endl;
    i = -i;
}

int main()
{
    //cout << "Hello world!" << endl;
    int a;
    a=45;
    cout << a << endl;
    neg(&a);
    cout << a << endl;

    neg(a);
    cout << a << endl;
    return 0;
}
