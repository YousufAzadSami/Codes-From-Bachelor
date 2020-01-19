#include <iostream>

using namespace std;

template <typename xType>
class StackForTwo{
    xType x[10][2];
    int top;
public:
    StackForTwo(){
        top = 0;
    }
    void push(xType one, xType two);
    void popOrPrint();
};

template <typename xType>
void StackForTwo<xType> :: push(xType one, xType two)
{
    try{
        if(top == 10)
            throw 10;
        x[top][0] = one;
        x[top][1] = two;
        top++;
        }catch(...){
            cout<< "sorry, stack is full!\n";
        }

}

template <typename xType>
void StackForTwo<xType> :: popOrPrint(){
    try{
        if(top == 0)
            throw 0;
        top--;
        cout << "first element: " << x[top][0] << endl;
        cout << "second element: " << x[top][1] << endl << endl;
    }catch(...){
        cout << "sorry, the stack is empty!\n";
    }
}

int main()
{
    StackForTwo<int> s1, s2;
    StackForTwo<double> s3;

    int i;
    for(i=0; i<6; i++){
        s1.push(i, i*i);
        s2.push(i-1, i*i*i);
        s3.push(i*3.33, i*33.33);
    }

    cout << "\n\n\n";

    for(i=0;i<11;i++){
        cout << "no: " << i+1 << " ___________________________\n";
        s1.popOrPrint();
        s2.popOrPrint();
        s3.popOrPrint();
        //cout << "______________________________\n";
    }
    return 0;
}
