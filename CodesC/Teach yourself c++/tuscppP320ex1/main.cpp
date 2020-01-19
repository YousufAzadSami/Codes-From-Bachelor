#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;


    ifstream copyFrom;
    copyFrom.open("copyFrom.txt");

    if(copyFrom==NULL){
        cout << "cannot open file" << endl;
    }
    int count = 0 ;

    copyFrom.unsetf(ios::skipws); // turning this line on and off agian makes a difference, mind it!

    while(!copyFrom.eof()){
        copyFrom >> ch;
        cout << ch;
        //cout << endl;
        count++;
    }

    cout << endl << endl << "count: " << count << endl;

    copyFrom.close();
    return 0;
}
