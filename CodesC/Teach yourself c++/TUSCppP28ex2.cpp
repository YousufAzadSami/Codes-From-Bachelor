#include<iostream>
using namespace std;

class card{
    char title;
    char author;
    int numOfCopy;

    public:
        void store(char o, char m);
        void show();
};

void card :: store(char t, char a){
    title = t;
    author = a;
}
void card::show(){
    cout << "Title is: "<< title << "\n" << "Author is: "<<author<<"\n\n";
}

int main(){

    card c1, c2, c3;
    c1.store('t', 'a');
    c1.show();

    c2.store('a', 'c');
    c2.show();

    return 0;
}
