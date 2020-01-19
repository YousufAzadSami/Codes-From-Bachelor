#include <iostream>

using namespace std;

const int SIZE = 5;

class arrayType{
    int a [SIZE];
public:
    arrayType(){
        int i;
        for(i=0;i<SIZE;i++){
            a[i] = i;
        }
    }
    int &operator[](int i);
};

int &arrayType:: operator[](int i){
    try
    {
        if(i<0 || i>SIZE-1)
        {
            throw i;
        }
        return a[i];

    }catch(int i){
        cout << "index value of " << i << " is out of bounds.\n";
    }
}

int main()
{
    arrayType ob;
    int i;

    for(i=0; i<SIZE; i++){
        cout << ob[i] << " ";
    }
    cout << endl << endl;
    ob[SIZE+100] = 99;


    return 0;
}
