#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype(){
        delete[] p;
    }
    friend ostream &operator<< (ostream &stream, strtype &ob);
};

strtype :: strtype(char *ptr){
    len = strlen(ptr) + 1;
    p = new char[len];

    if(!p){
        cout << "allocation prb" << endl;
        exit(1);
    }
    strcpy(p, ptr);
}

osteam &operator<< (ostream &stream, strtype &ob){
    stream << ob.p << endl;
    stream << ob.len << endl << endl;

    return stream;
}
int main()
{
    strtype s1("this is a test!");
    strtype s2 = strtype("i like c++ ...");

    //cout << s1 << endl << s2 << endl;

    cout << s1 ;
    return 0;
}
