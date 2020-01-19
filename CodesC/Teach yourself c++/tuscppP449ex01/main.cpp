#include <iostream>
#include <cstring>

using namespace std;

class strtype{
    char str[100];
    int len;
public:
    strtype(char *c){
        strcpy(str,c);
        len = strlen(str);
    }
    operator int(){
        return len;
    }
    operator char *(){
        return str;
    }
};

int main()
{
    strtype s1("this is the first object");
    strtype s2 = strtype("THIS IS THE SECOND OBJECT");

    int length = s1;
    char *cp = s1;

    cout << cp << endl << length << endl << endl;

    length = s2;
    cp = s2;

    cout << cp << endl << length << endl << endl;
    return 0;
}
