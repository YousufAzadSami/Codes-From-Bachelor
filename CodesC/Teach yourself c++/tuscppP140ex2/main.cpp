#include <iostream>

using namespace std;

int main()
{
    double *d;

    d = new double(-123.0987);

    cout << *d << endl << "address: " << d << endl;
    return 0;
}
