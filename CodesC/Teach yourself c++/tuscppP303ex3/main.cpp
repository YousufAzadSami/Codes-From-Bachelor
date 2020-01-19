#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello world!" << endl << endl;

    cout << dec << 100 << endl;
    cout << hex << 100 << endl;
    cout << oct << 100 << endl;
    cout << dec << 100 << endl;

    cout << "part 1 is finished! hooof!!!" << endl << endl << endl;

    cout << setw(20) << setprecision(2) << setfill('*') << left << 1000.5364 << endl << endl;
    return 0;
}
