#include <iostream>

using namespace std;

template<typename type1>
type1 minNum(type1 a, type1 b){
    if(a>b)
        return a;
    else
        return b;
}


int main()
{
    cout << "the min number is: " << minNum(89, 12) << endl << endl;
    cout << "the min number is: " << minNum(89.239, 812.0987) << endl << endl;
    return 0;
}
