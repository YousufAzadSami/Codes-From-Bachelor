#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype();
    friend char *getString(strtype *pp);
    void show();
};

strtype :: strtype(char *ptr){
    len = strlen(ptr);
    p = (char *) malloc(len+1);
    if(!p){
        cout << "allocation prblem" << endl;
        exit(1);
    }
    strcpy(p, ptr);
}
strtype :: ~strtype(){
    cout << "Freeing p" << endl;
    free(p);
}

void strtype :: show(){
    cout << p << " - length: " << len ;
    cout << endl;
}

char *getString( strtype *pp){
    return pp->p;
}

int main()
{
    strtype s1("they said, this is a test!"), s2("actually, i really am liking c++. although reference pain ditese");

    s1.show();
    s2.show();

    cout << endl<< endl<<"the magic should be this" <<endl << getString(&s2) << endl << endl;

    s2 = s1;

    s1.show();
    s2.show();

    return 0;
}
