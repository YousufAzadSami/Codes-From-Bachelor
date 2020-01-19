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
    //letters l[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    letters l[10] = { letters('a'), letters('b'), letters('c'), letters('d'), letters('e'),
                    letters('f'), letters('g'), letters('h'), letters('i'), letters('j')};

    for(int i=0; i<10;i++){
        cout << l[i].getCh() << endl;
    }

    return 0;
}
