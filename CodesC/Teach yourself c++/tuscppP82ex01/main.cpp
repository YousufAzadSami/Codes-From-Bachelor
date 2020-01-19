#include <iostream>
#include <cstdlib>
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
    void show();
    ~Stack(){
        free(s);
    }
};
/*
Stack :: Stack(){
    top = 0;
}

void Stack :: push(char ch){
    if(top == SIZE){
        cout<<"The stack is already full" << endl;
        return ;
    }
    s[top] = ch;
    top++;
}
char Stack :: pop(){
    if(top==0){
        cout<< "Stack is already empty" << endl;
        return NULL;
    }
    else{
        top--;
        return s[top];
    }
}
*/
void Stack :: show(){
    for(int i=0; i< top; i++){
        cout << "no " << i+1 <<"element :" << s[i] << endl;
    }
    cout << endl;
}
/*
Stack :: ~Stack(){
    cout<< "Object EXPLODING ..."<< endl;
    free(s);
}
*/
int main()
{
    cout << "Hello world!" << endl;
    Stack s1;
    s1.push('a');
    s1.push('b');
    s1.push('d');
    s1.push('u');
    s1.push('l');

    s1.show();

    cout << "poped elemnet is :" << s1.pop() << endl;
    cout << "poped elemnet is :" << s1.pop() << endl << endl;

    s1.show();

    return 0;
}
