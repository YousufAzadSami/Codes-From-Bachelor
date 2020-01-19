#include <iostream>
using namespace std;

class box{
    double length, width, height;
    double result;

public:
    box(double, double , double);
    void vol();
    ~box();
};


box :: box(double a, double b, double c){
    length = a;
    width = b;
    height = c;
    result = 0;
}

void box :: vol(){
    result = length * width * height ;
    cout << "the volume of the box is :" << result << endl;
}

box :: ~box(){
    cout << "ur precious Object will be destroyed now" << endl;
}


int main()
{
    box b1(1,2,3) , b2(11,22,33), b3(741,852,963);

    b1.vol();
    cout<<endl;
    b2.vol();
    cout<<endl;
    b3.vol();
    cout<<endl;

    cout << "the size of a cls is " << sizeof(box) << endl;

    return 0;
}
