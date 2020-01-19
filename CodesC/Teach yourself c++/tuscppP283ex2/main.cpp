#include <iostream>

using namespace std;

int main()
{
    int i=59;
    float f=999*999;
    double d= 9999*9999;

    cout << i << ' ' << f << ' ' << d << endl;

    cout.setf(ios::showpoint);
    cout.setf(ios::scientific);
    cout.setf(ios::uppercase);

    cout << i << ' ' << f << ' ' << d << endl;

    cout << i << ' ' << f << ' ' << d << endl;
    return 0;
}
