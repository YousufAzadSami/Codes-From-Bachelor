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
    if(top == 10){
        cout << "sorry, the stack is full ...\n\n";
        return;
    }
    x[top][0] = one;
    x[top][1] = two;
    top++;
}

template <typename xType>
void StackForTwo<xType> :: popOrPrint(){
    if(top == 0){
        cout << "sorry, the stack if empty ... \n\n";
        return;
    }
    top--;
    cout << "first element: " << x[top][0] << endl;
    cout << "second element: " << x[top][1] << endl << endl;
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
