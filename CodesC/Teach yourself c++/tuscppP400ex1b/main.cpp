#include <iostream>

using namespace std;



void Xhandler(int test){
    try{
        cout << "start of try\n\n";
        if(test == 0)
            throw test;
        if(test == 1)
            throw 'a';
        if(test == 2)
            throw 123.234;
        cout << "if error doesnt occur, this will be printed\n\n";
    }
    catch(int i){
        cout << "cougth an error, type INT, number: " << i << endl;
    }
    catch(char a){
        cout << "caught an error, type CHAR, number: " << a << endl;
    }
    catch(...){
        cout << "caught an erron, type ANNONYMOUS, number: " << endl;
    }
}



int main()
{
    cout << "ishStart :P\n\n";

    Xhandler(-1);
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);

    cout << "pinished :P\n\n";
    return 0;
}
