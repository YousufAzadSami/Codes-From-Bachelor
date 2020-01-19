#include <iostream>

using namespace std;

void f(unsigned char c){
    cout << "in unsighned area" <<c;
}
void f(char c){
    cout <<"in normal area" <<c;
}

int main()
{
    f('c');
    f(86);

    return 0;
}
