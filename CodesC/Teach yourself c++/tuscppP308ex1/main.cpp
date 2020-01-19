#include <iostream>

using namespace std;

int main()
{
    cout.width(40);
    cout.fill(':');
    cout << "C++ is fun" << endl;

    cout.setf(ios::left);
    cout.width(20);
    cout << "C++ is fun" << endl;

    cout.width(40);
    cout.fill(':');

    cout << "C++ is fun" << endl;

    return 0;
}
