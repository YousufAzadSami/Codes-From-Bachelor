#include <iostream>

using namespace std;

class planet{
protected:
    double distance;
    int revolve;
public:
    planet(double d=0, int r=0){
        distance = d;
        revolve = r;
    }
};

class earth : public planet{
    double circum;
public:
    earth(double d, int r) : planet(d,r){
        circum = 2 * distance * 3.14159;
    }
    friend ostream &operator<< (ostream &stream, earth &ob);
};

ostream &operator<< (ostream &stream, earth &ob){
    stream << "distance from sun:" << ob.distance << endl;
    stream << "days in orbit: " << ob.revolve << endl;
    stream << "circumference of orbit : " << ob.circum << endl;

    return stream;
}
int main()
{
    earth ob(93000000, 365);

    cout << ob << endl;
    return 0;
}
