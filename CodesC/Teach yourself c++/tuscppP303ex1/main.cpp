#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl << endl;

    cout <<  100 << endl;
    //  UNSETF IS IMPORTANT WHEN GOING FORM "DEC TO OTHERS" BUT NOT VICE VERSA
    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout << 100 << endl;

    cout.unsetf(ios::hex);
    cout.setf(ios::oct);
    cout << 100 << endl;

    cout.setf(ios::dec);
    cout << 100 << endl;
    return 0;
}
