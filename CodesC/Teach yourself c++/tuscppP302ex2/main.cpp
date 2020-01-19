#include <iostream>

using namespace std;

class lowestFactor{
    int i;
    int factor;
public:
    lowestFactor(int ii=0, int f=0){
        i = ii;
        factor = f;
    }
    friend ostream &operator<< (ostream &stream, lowestFactor &ob);
    friend istream &operator>> (istream &stream, lowestFactor &ob);
};

ostream &operator<< (ostream &stream, lowestFactor &ob){
    stream << "given number is: " << ob.i << endl;
    stream << "lowes factor is: " << ob.factor << endl;

    return stream;
}

istream &operator>> (istream &stream , lowestFactor &ob){
    cout << "giv a number: " << endl;
    stream >> ob.i ;

    // CALCULATE UR LOWEST FACTOR
    return stream;
}
int main()
{
    lowestFactor l1;

    cin >> l1;
    cout << l1 << endl;

    return 0;
}
