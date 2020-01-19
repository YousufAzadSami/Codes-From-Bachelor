#include <iostream>

using namespace std;

#define SIZE 100

class Stack{
    char s[SIZE];
    int top;
public:
    Stack(){
        top = 0;
    }
    void push(char ch){
        if(top == SIZE){
            cout<<"The stack is already full" << endl;
            return ;
        }
        s[top] = ch;
        top++;
    }

    char pop(){

        if(top==0){
            cout<< "Stack is already empty" << endl;
            return NULL;
        }
        else{
            top--;
            return s[top];
        }
    }
    friend ostream &operator<< (ostream &stream, Stack &ob);
};

ostream &operator<< (ostream &stream, Stack &ob){
    for(int i=0; i< ob.top; i++){
        stream << "no " << i+1 <<"element :" << ob.s[i] << endl;
    }
    stream << endl;

    return stream;
}

int main()
{
    Stack s;

    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(45);

    cout << s << endl;

    return 0;
}
