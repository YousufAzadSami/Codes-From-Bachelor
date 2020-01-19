#include <iostream>

using namespace std;

class pwr{
    int base;
    int exponent;
    double result;
public:
    pwr(int b, int e);
    friend istream &operator>> (istream &stream, pwr &ob);
    friend ostream &operator<< (ostream &stream, pwr &ob);
};

pwr :: pwr(int b, int e){
    base = b;
    exponent = e;

    result = 1;
    for( ; e; e--){
        result = result * base;
    }
}

istream &operator>> (istream &stream, pwr &ob){
    cout << "enter base: ";
    stream >> ob.base;
    cout << "enter exponent: ";
    stream >> ob.exponent;

    return stream;
}
ostream &operator<< (ostream &stream, pwr &ob){
    stream << "base: " << ob.base << endl;
    stream << "exponent: " << ob.exponent << endl;
    stream << "result: " << ob.result << endl;

    return stream;
}
int main()
{
    pwr p1(2,4);
    pwr p2 = pwr(5,8);

    cin >> p1;
    cin >> p2;

    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}
