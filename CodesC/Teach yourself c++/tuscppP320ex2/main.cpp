#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    char name[20], phoneNumber[20], serialNumber[20];
    ofstream writeHere;
    writeHere.open("info.txt");

    if(writeHere == NULL){
        cout << "cannot open file\n";
    }

    cout << "Enter your informations: " << endl << endl;

    while(true){
        gets(name);

        if(name[0] == '*'){
            break;
        }
        gets(serialNumber);
        gets(phoneNumber);

        writeHere << setw(15) << name << ", " << setw(10) <<  serialNumber << ", " << setw(20) << phoneNumber << "\n";
    }

    return 0;
}
