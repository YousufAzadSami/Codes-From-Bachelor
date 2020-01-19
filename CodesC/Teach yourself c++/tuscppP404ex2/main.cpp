#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "program starts\n\n";
    int *p;

    //p = (int *) malloc(sizeof(int));
    p = new(nothrow) int;

    if(!p){
        cout << "Allocation error madafaka!\n\n";
        exit(1);
    }

    free(p);

    try{
        p = new int;
    }
    catch(bad_alloc e){
        cout << "BAD_ALLOC error\n\n";
    }

    cout << "program ends\n\n";
    return 0;
}
