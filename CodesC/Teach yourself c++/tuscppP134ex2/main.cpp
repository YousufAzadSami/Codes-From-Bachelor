#include <iostream>
#include <cstring>

using namespace std;

class Telephone{
    char name[40];;
    int num;
public:
    void setName(char c[]){
        strcpy(name, c);
    }
    void setNum(int n){
        num = n;
    }
    void show(){
        cout << "name :" << name << endl;
        cout << "Telephone no :" << num << endl << endl;
    }
};

int main()
{
    Telephone *p;
    p = new Telephone();

    Telephone pp;

    cout << sizeof(*p) << "  " << sizeof(pp) << endl;

    p->setName("sami");
    p->setNum(013);

    p->show();

    return 0;
}
