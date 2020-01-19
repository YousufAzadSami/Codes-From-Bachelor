#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    int count = 0;
    int words = 0;

    ifstream input;
    input.open("textFile.txt", ios::in | ios::binary);

    if(input == NULL){
        cout << "problem opening file" << endl;
    }

    while(!input.eof()){
        input.get(ch);
        cout << ch ;
        if(ch == ' '){
            words++;
        }
        count++;
    }

    cout << endl << endl << "Number of charecters: " << count << endl;
    cout << endl << endl << "Number of words: " << words+1 << endl;
    return 0;
}
