#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    ifstream paragrahpInput;

    paragrahpInput.open("paragraph.txt");

    if(paragrahpInput == NULL){
        cout << "prblem opening file" << endl;
    }

    paragrahpInput.unsetf(ios::skipws);
    while(!paragrahpInput.eof()){
        paragrahpInput >> ch;

        if(ch== ' '){
            count++;
        }
    }

    cout << "Total word: " << count+1 << endl;

    return 0;
}
