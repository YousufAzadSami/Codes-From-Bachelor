#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int testCase;
    double length, radius;
    //double length, width, radius;
    double recSquare, circleSquare;
    double PI = acos(-1);

    cin >> testCase;

    while(testCase--){
        cin >> length;

        //width = length * 6 / 10;
        radius = length / 5;

        //recSquare = length * width;
        circleSquare = PI * radius * radius;
        recSquare = (length * length * 6 / 10) - circleSquare;

        //printf("%.2lf %.2lf\n", circleSquare, recSquare-circleSquare );
        printf("%.2lf %.2lf\n", circleSquare, recSquare );
    }
    return 0;
}
