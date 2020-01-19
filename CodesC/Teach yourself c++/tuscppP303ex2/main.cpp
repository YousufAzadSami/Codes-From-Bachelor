#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl << endl;

    cout.setf(ios::left);
    cout.width(20);
    cout.precision(2);
    cout.fill('*');
    cout << 1000.5364 << endl;

    return 0;
}
