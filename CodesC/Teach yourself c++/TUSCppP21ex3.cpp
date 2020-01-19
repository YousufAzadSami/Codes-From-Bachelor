#include<iostream>
using namespace std;

#define SIZE 10

class queue{
    int a[SIZE];
    int top, bottom;

    public:
        void init();
        void push(int temp);
        void pop();
        void show();
};

void queue :: init(){
    top = 0;
    bottom = 0;

}
void queue :: push(int temp){
    a[top] = temp;
    top++;
}
void queue::pop(){
    bottom++;
}
void queue::show(){
    for(int i=bottom ; i<top ; i++){
        cout << a[i] << "  ";
        //printf("%d  ", a[i]);
    }
    cout<<"\n";
}
int main(){

    queue q1;

    cout<<"pushing \n";
    q1.push(5);
    q1.push(10);
    q1.push(15);
    q1.push(100);

    cout<< "showing \n";
    q1.show();

    cout<<"\npoping \n";

    q1.pop();

    cout<<"showing after popping\n";
    q1.show();

    cout<<"end of program\n";

    return 0;
}
