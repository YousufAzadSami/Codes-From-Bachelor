#include <iostream>

using namespace std;

int main()
{
    bool b;

    cout << "before setting bool alpha off" << endl;
    b = true;
    cout << b << endl;
    b = false;
    cout << b << endl;

    cout << boolalpha ;
    cout << "after setting bool alfa to on" << endl;
    b = true;
    cout << b << endl;
    b = false;
    cout << b << endl;

    //cout.unsetf(ios::boolalpha);
    cout << noboolalpha ;
    cout << "after turning it off agian" << endl;
    b = true;
    cout << b << endl;
    b = false;
    cout << b << endl;

    cin >> boolalpha;
    cout << " :: CIN :: turning boolalpha ON" << endl;
    cin >> b;
    cout << b;  // boolalpha is off for cout

    return 0;
}
