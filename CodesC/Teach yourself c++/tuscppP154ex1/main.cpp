#include <iostream>
#include <cstdlib>

using namespace std;

class array{
    char *c;
    int rowNo, coloumNo;
public:
    array(int, int);
    ~array();
    char &put(int , int);
    char get(int , int);
};

array :: array(int a, int b){
    c = new char[a*b];

    if(c==NULL){
        cout << "allocation error" << endl;
        exit(1);
    }
    rowNo = a;
    coloumNo = b;
}
array :: ~array(){
    delete[] c;
}
char &array :: put(int i, int j){
    if(i<0 || i>= rowNo || j<0 || j>=coloumNo){
        cout << "out of bounds" << endl;
        exit(1);
    }
    return c[i*rowNo + j];
}
char array :: get(int i, int j){
    if(i<0 || i>=rowNo || j<0 || j>=coloumNo){
        cout << "allocation error" << endl;
        exit(1);
    }
    return c[i*rowNo + j];
}

int main()
{
    array a1(10,10);

    a1.put(1,3) = 'A';
    a1.put(1,1) = 'B';
    a1.put(0,0) = 'C';

    cout << "ur fucking elements " << endl;


    for(int i=0;i<4;i++){
        for(int j=0;i<2;j++){
            cout << a1.put(i,j) << "%5s" ;
        }
        cout << endl;
    }

    return 0;
}
