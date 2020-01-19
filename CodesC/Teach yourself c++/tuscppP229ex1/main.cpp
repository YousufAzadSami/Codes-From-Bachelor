#include <iostream>
#include <cstring>

using namespace std;

class strtype{
    char *s;
    int len;
public:
    strtype(){
        s = new char[7];
        strcpy(s, "unused");
        len = strlen(s);
    }
    strtype(char *temp){
        len = strlen(temp);
        s = new char[len+1];

        strcpy(s, temp);
    }
    void show(){
        cout << "the string is: " << s << endl;
        cout << "length: " << len << endl;
    }
    strtype &operator=(strtype ob2){
        delete [] s;
        len = ob2.len;
        s = new char[len+1];
        strcpy(s, ob2.s);

        return *this;
    }
    strtype operator+(strtype ob2){
        strtype temp;
        delete [] temp.s;
        temp.len = len + ob2.len + 1;
        temp.s = new char[temp.len];

        cout << "single charecter " << temp.s[0] << endl;
        strcat(temp.s, s);
        cout << "\n\n";
        cout << "inside temp ---> " << temp.s << endl;
        strcat(temp.s, ob2.s);
        cout << "inside temp ---> " << temp.s << endl;
        cout << "\n\n";

        return temp;
    }
};
int main()
{
    strtype s1("0123456");
    strtype s2 = strtype("789");
    strtype s3;


    s1.show();
    s2.show();
    s3.show();

    s3 = s1 + s2;
    s1 = s2;


    s1.show();
    s2.show();
    s3.show();

    return 0;
}
