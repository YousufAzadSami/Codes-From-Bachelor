#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class account {
    int customerNum;
    char name[80];
    double balance;
public:
    account(int c, char *n, double b){
        customerNum = c;
        strcpy(name , n);
        balance = b;
    }

    friend ostream &operator<< (ostream &f, account &ob);
};

ostream &operator<< (ostream &f, account &ob){
    f << "Customer Number: "  << ob.customerNum << endl;
    f << "Name: " << ob.name << endl;
    f << "Balance: " << ob.balance << endl;

    return f;
}

int main()
{
    account sami(96,"sami", 1592), mou(46,"mou",1992);

    ofstream accountFile;
    accountFile.open("accountInfo.txt", ios::out | ios::binary);
    //accountFile.open("accountInfo.txt");

    if(accountFile == NULL){
        cout << "cannot open file" << endl;
    }

    cout << sami << endl << endl;
    cout << mou << endl << endl;

    accountFile << sami << endl << endl;
    accountFile << mou << endl << endl;

    accountFile.close();

    return 0;
}
