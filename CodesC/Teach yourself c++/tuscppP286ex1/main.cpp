#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout.precision(5);
    cout.setf(ios::showpoint);
    cout.setf(ios::right);
    cout << "         x   sqrt(x)       x^2\n\n";
    //cout.width(7);

    for(x=2.0; x<=20; x++){
        cout.width(10);
        cout << x  ;
        cout.width(10);
        //cout << sqrt(x) << "  ";
        cout << log(x) ;
        cout.width(10);
        //cout<< x*x << '\n';
        cout << log10(x) << '\n';
    }
    return 0;
}
