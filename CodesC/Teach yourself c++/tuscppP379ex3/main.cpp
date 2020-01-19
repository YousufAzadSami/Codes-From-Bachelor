#include <iostream>

using namespace std;

template<typename anyType>
anyType find(anyType objectToFind, anyType *list, int size){

    for(int i=0; i<size; i++){
        if(list[i] == objectToFind){
            return i;
        }
    }
    return -1;
}

int main()
{
    int i[5] = {5, 10, 15, 20, 25};
    double f[5] = {5.005, 10.005, 15.005, 20.005, 25.005};

    cout << "serching in int series: " << find(5, i, 5) << endl << endl;
    cout << "serching in float series: " << find(25.005, f, 5) << endl << endl;
    cout << "serching in float series: " << find(15005.03, f, 5) << endl << endl;

    return 0;
}
