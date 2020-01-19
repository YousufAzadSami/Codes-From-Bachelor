#include <iostream>

using namespace std;

class area {
    double dim1, dim2;
public:
    void setArea(double d1, double d2){
        dim1 = d1;
        dim2 = d2;
    }
    void getDimension(double &d1, double &d2){
        d1 = dim1;
        d2 = dim2;
    }

    virtual double getArea() = 0;

};

class rectangle : public area{
public:
    double getArea(){
        double dd1, dd2;
        getDimension(dd1, dd2);
        return dd1*dd2;
    }
};

class triangle : public area{
public:
    double getArea(){
        double d1, d2;
        getDimension(d1, d2);
        return .5 * d1 * d2;
    }
};
int main()
{
    //area a;

    rectangle r;
    triangle t;

    r.setArea(20.33,66.23);
    t.setArea(20,30);

    cout << "Area of the RECTANGLE : " << r.getArea() << endl;
    cout << "Area of the TRIANGLE  : " << t.getArea() << endl;
    return 0;
}
