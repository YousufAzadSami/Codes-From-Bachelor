#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i;

    ifstream input;
    input.open("para.txt");

    ofstream output;
    output.open("result.txt");

    char ch;

    while(!input.eof()){
        input.get(ch);

        if(ch == '\t'){
            cout << "        ";
            for(i=8;i>0;i--){
                output.put(ch);
            }
        }else{
            cout << ch ;
            output.put(ch);
        }

    }

    return 0;
}
