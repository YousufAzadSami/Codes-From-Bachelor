#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

#define TOTAL_LINE_LENGTH 80

using namespace std;

void center(char *s){
    int len = strlen(s);
    int halfLen = len / 2;
    //cout.width((TOTAL_LINE_LENGTH/2) + halfLen);
    //cout << s << endl;
    cout << setw((TOTAL_LINE_LENGTH/2) + halfLen) << s << endl;

    cout.setf(ios::left);
    cout.width(40);
    cout << s << endl;

    cout.setf(ios::right);
    cout.width(40);
    cout << s << endl;
}


int main()
{
    double x;

    //cout.precision(5);
    //cout.setf(ios::showpoint);
    //cout.setf(ios::right);
    cout << setw(10) << "x" << setw(10) << "sqrt(x)" << setw(10) <<"x^2\n\n" ;
    //cout.width(7);

    for(x=2.0; x<=20; x++){
        cout << setprecision(5);
        //cout.width(10);
        cout << setw(10) << x  ;
        //cout.width(10);
        //cout << sqrt(x) << "  ";
        cout << setw(10) << log(x) ;
        //cout.width(10);
        //cout<< x*x << '\n';
        cout << setw(10) << log10(x) << '\n';
    }

    cout << endl << endl << endl;
    center("this is sparta!!");

    cout << 100 << endl;

    //cout << setw(20);
    cout.width(20);
    cout << hex << 100 << endl;

    cout << oct << 100 << endl;
    cout << 100 << endl;
    return 0;
}
