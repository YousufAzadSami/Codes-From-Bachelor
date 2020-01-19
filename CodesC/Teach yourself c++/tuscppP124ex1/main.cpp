#include <iostream>

using namespace std;

class letters{
    char ch;
public:
    letters(char c){
        ch = c;
    }
    char getCh(){
        return ch;
    }
};

int main()
{
    letters l[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    for(int i=0; i<10;i++){
        cout << l[i].getCh() << endl;
    }

    return 0;
}
