#include <iostream>

using namespace std;

#define SIZE 10

template <typename anyType>
class queue{
    anyType a[SIZE];
    int top;
    int bottom;
public:
    queue();
    void push(anyType element);
    anyType pop();
};

template <typename anyType>
queue<anyType> :: queue(){
    top = bottom = 0;
}

template <typename anyType>
void queue<anyType> :: push(anyType element){
    if(top==SIZE){
        cout << "queue is full\n\n";
        return;
    }
    a[top] = element;
    top++;
}

template <typename anyType>
anyType queue<anyType> :: pop(){
    if(top == bottom){
        cout << "queue is empty\n\n";
        return 0;
    }
    return a[bottom++];
}

int main()
{
    queue<int> qi1,qi2;
    int i;

    for(i=1; i<7;i++){
        qi1.push(i*5);
    }
    for(i=1; i<9;i++){
        qi2.push(i*3+6);
    }

    cout << "poping the queue ....... sure he queue 3:)\n\n\n";

    for(i=1; i<7;i++){
        cout << "qi1 pop: " << qi1.pop() << "\n";
    }
    cout << endl << endl;

    for(i=1; i<9;i++){
        cout << "qi2 pop: " << qi2.pop() << "\n";
    }

    cout << endl << endl;
    return 0;
}
