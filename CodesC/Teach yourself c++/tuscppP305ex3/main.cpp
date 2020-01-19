#include <iostream>

using namespace std;

class FeetToInches{
    double feet;
    double inches;
public:
    void set(double f){
        feet = f;
        inches = f * 12;
    }
    friend istream &operator>> (istream &stream, FeetToInches &ob);
    friend ostream &operator<< (ostream &stream, FeetToInches &ob);
};

istream &operator>> (istream &stream, FeetToInches &ob){
    cout << "Enter feet: ";
    stream >> ob.feet ;

    return stream;
}

ostream &operator<< (ostream &stream, FeetToInches &ob){
    stream << "Feet: " << ob.feet << endl;
    stream << "Inches: " << ob.inches << endl;

    return stream;
}
int main()
{
    FeetToInches f;

    cin >> f;
    cout << f << endl;
    return 0;
}
