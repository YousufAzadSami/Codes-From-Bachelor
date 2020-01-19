#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    //fin.open("lineByLine.txt");
    fin.open("lineByLine.txt", ios::in|ios::binary);

    // BINARY AAR NORMAL TEXT MODE ER VITOR INPUT ER CASE E DIFFERENCE DEKTESI NA :/

    char str[100];

    while(!(fin.eof())){
        fin.getline(str, 99);
        cout << str << endl;
    }
    return 0;
}
