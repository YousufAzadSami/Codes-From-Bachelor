#include <iostream>

using namespace std;

template <typename xType>
xType summation(xType *arr, int length )
{
    int i;
    xType sum = 0;
    for(i=0; i< length ; i++){
        sum = arr[i] + sum;
    }

    return sum;
}


int main()
{
    int a[10] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    double d[5] = {5.55, 6.66, 7.77, 8.88, 9.99};

    cout << "the summation of the integer array is: " << summation(a, 10) << endl;
    cout << "the summation of the double array is: " << summation(d, 5) << endl;
    return 0;
}
