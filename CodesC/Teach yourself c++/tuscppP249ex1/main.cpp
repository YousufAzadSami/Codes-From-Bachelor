#include <iostream>
#include <cstring>

using namespace std;

class MyBase{
    char str[80];
public:
    MyBase(char *s){
        strcpy(str, s);
    }
    char *get(){
        return str;
    }
};

class MyDerived : public MyBase{
    int len;
public:
    MyDerived(char *str) : MyBase(str){
        len = strlen(str);
    }
    int getlen(){
        return len;
    }
    void show(){
        cout << get() << endl;
    }
};
int main()
{
    MyDerived ob("hello there!");
    ob.show();
    cout << ob.getlen() << endl;

    return 0;
}
