#include <iostream>

using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////
class pr2;      // THIS IS CALLED FOWARD DECLARATION
//////////////////////////////////////////////////////////////////////////////////////////////////////

class pr1{
    int printing;
public:
    void setPrint(int p){
        printing = p;
    }
    friend int inuse(pr1, pr2);
};

class pr2{
    int printing;
public:
    pr2(){
        printing=0;
    }
    void setPrint(int p){
        printing = p;
    }
    friend int inuse(pr1, pr2);
};

int inuse(pr1 pp1, pr2 pp2){
    if(pp1.printing==1 || pp2.printing==1){
        return 1;
    }else
        return 0;
}

int main()
{
    pr1 p1;
    pr2 p2;

    if(inuse(p1, p2))
        cout << "printer is in use" << endl;
    else
        cout << "printer is available" << endl;

    p1.setPrint(1);

    if(inuse(p1, p2))
        cout << "printer is in use" << endl;
    else
        cout << "printer is available" << endl;

    p2.setPrint(1);

    if(inuse(p1, p2))
        cout << "printer is in use" << endl;
    else
        cout << "printer is available" << endl;

    p1.setPrint(0);
    p2.setPrint(0);

    if(inuse(p1, p2))
        cout << "printer is in use" << endl;
    else
        cout << "printer is available" << endl;

    return 0;
}
