#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int current, target, difference;

    while(true){
        cin >> current >> target ;

        if(current==-1 && target==-1){
            break;
        }

        difference = abs(current - target);

        //cout << endl << difference<< endl;

        if(difference>50){
            if(current < target)
                difference = abs(current - 0) + abs(99 - target) + 1; //for 0 to 99
            else
                difference = abs(target - 0) + abs(99 - current) + 1; //for 0 to 99
        }
        cout << difference << endl;
    }
    return 0;
}
