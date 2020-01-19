#include <iostream>

using namespace std;

int main()
{
    int *i;
    float *f;
    long *l;
    char *c;

    i = new int;
    f = new float;
    l = new long;
    c = new char;

    if(i== NULL || f==NULL || l==NULL || c==NULL){
        cout << "Allocation error" << endl;
        return 1;
    }

    *i = 10;
    *f = 10.123;
    *l = 123442143;
    *c = 'a';

    cout << "int is :" << *i << endl ;
    cout << "float is :" << *f << endl;
    cout << "long is :" << *l << endl;
    cout << "char is :" << *c << endl << endl;

    delete i;
    delete f;
    delete l;
    delete c;

    return 0;
}
