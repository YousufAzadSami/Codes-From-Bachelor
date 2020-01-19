#include <iostream>

using namespace std;

template <typename xType>
void bubbleSort(xType *a, int len)
{
    int i, j;
    xType temp;

    for(i=0; i<(len-1); i++)
    {
        for(j=i; j<(len-1-i); j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int i;
    int a[10] = {5, 15, 10, 30, 25, 20, 50, 35, 40, 45};
    double d[5] = {8.88, 5.55, 9.99, 6.66, 7.77};

    for(i=0; i<10 ; i++){
        cout << a[i] << " ";
    }
    cout << endl << endl;
    for(i=0; i<5 ; i++){
        cout << d[i] << " ";
    }
    cout << endl << endl;

    bubbleSort(a, 10);
    bubbleSort(d, 5);


    for(i=0; i<10 ; i++){
        cout << a[i] << " ";
    }
    cout << endl << endl;
    for(i=0; i<5 ; i++){
        cout << d[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
