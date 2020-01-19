#include <iostream>

using namespace std;

#define SIZE 10
template <typename anyType> class stack{
    anyType a[SIZE];
    int top;
public:
    void init();
    void push(anyType element);
    anyType pop();
};

template <typename anyType>
void stack<anyType> :: init(){
    top = 0;
}

template <typename anyType>
void stack<anyType> :: push(anyType element){
    if(top == SIZE){
        cout << "stack is full\n\n";
        return;
    }
    a[top] = element;
    top++;
}

template <typename anyType>
anyType stack<anyType> :: pop(){
    if(top == SIZE){
        cout << "stack is empty\n";
        return 0;
    }
    top--;
    return a[top];
}
int main()
{
    //stack<anyTyep>
    stack<char> s1,s2;
    int i;

    // initialization
    s1.init();
    s2.init();

    s1.push('a');
    s1.push('b');
    s2.push('x');
    s1.push('c');
    s2.push('y');
    s2.push('z');
    s1.push('d');

    for(i=0; i<4; i++){
        cout << "pop s1: " << s1.pop() << endl;
    }
    for(i=0; i<3; i++){
        cout << "pop s2: " << s2.pop() << endl;
    }
    return 0;
}
