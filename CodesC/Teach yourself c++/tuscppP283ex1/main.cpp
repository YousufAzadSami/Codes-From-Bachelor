#include <iostream>

using namespace std;

int main()
{
    int pos=1265;
    int neg=-999;
    double f = 159;

    cout << pos << " " << neg << " " << f << endl;

    //cout.setf(ios::dec);
    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);

    cout << pos << " " << neg << " " << f << endl;

    return 0;
}
