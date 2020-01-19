#include <iostream>

using namespace std;

class pwr{
    int base;
    int exp;
public:
        pwr(int b, int e){
            base = b;
            exp = e;
        }
        operator int(){
            int result = 1;

            for(int i=1; i<=exp; i++){
                result = result * base;
            }

            return result;
        }

};

int main()
{
    pwr p1(2,8), p2(3,5);
    int result;

    result = p1;
    cout << result << endl;

    result = p2;
    cout << result << endl;

    return 0;
}
