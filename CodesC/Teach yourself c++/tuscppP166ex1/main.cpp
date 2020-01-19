#include <iostream>
#include <cstring>

using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(){
        len = 255;
        p = new char[255];
        *p = NULL;
    }
    strtype(char *c, int len){
        p = new char[len + 1];
        this->len = len;
        strcpy(p, c);

    }
    char *getString(){
        return p;
    }
    int getLength(){
        return len;
    }
};

int main()
{
    strtype s1, s2("this is a test", 15 );

    cout << s2.getString() << endl << s2.getLength() << endl << endl;
    cout << s1.getString() << endl << s1.getLength() << endl << endl;

    return 0;
}
