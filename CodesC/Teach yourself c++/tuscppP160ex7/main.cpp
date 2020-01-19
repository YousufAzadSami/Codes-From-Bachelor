#include <iostream>

using namespace std;

void mag(long &num, long order);

int main()
{
    long input, numOfZero;

    cout << "Enter ur number: ";
    cin >> input;
    cout << "Enter the order of the number: ";
    cin >> numOfZero;

    mag(input, numOfZero);

    cout << endl << endl << "Your desired result is : " << input << endl;
    return 0;
}

void mag(long &num , long order){
    for(int i=1; i<=order; i++){
        num = num * 10;
    }
}
