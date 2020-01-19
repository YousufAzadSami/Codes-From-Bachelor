#include <iostream>

using namespace std;

template <typename anyType>
class input {
    anyType a;
public:
    input(char *str, anyType max, anyType min);
};

template <typename anyType>
input<anyType> :: input(char *str, anyType max, anyType min){

    while(true){
        cout << str << endl;
        cin >> anyType;

        if(anyType > min && anyType < max)
           break;
    }
}
int main()
{
    input<int> iOb("Enter ur int number", 1, 100);
    return 0;
}
