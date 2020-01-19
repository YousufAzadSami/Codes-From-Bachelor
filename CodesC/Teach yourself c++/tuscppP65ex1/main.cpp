#include <iostream>

using namespace std;

class area_cl{
public:
    double height;
    double width;
};

class rectangle : public area_cl{
public:
    rectangle(double, double);
    double area();
};

class isosceles : public area_cl{
public:
    isosceles(double , double);
    double area();
};

rectangle :: rectangle(double a, double b){
    height = a;
    width = b;
}
double rectangle :: area(){
    return height*width;
}
isosceles :: isosceles(double a, double b){
    height = a;
    width = b;
};
double isosceles :: area(){
    return .5*height*width;
}

int main()
{
    cout << "Hello world!" << endl;
    rectangle r1(1.666,89.987), r2(10, 33.330);
    isosceles i1(33.45,66);

    cout<<"area of r1: "<< r1.area()<<endl;
    cout<<"area of r2: "<< r2.area()<<endl;

    cout<<endl;

    cout<<"area of i1: "<<i1.area()<<endl;
    return 0;
}
