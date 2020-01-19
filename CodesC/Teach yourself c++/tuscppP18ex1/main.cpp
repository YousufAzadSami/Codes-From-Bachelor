#include<iostream>
using namespace std;

int main()
{
    int numOfHourWorked, wage;

    cout << "Enter the number of hours the employee worked: ";
    cin >> numOfHourWorked;

    cout << "Enter the wage: ";
    cin >> wage;

    cout << "Total pay: " << wage*numOfHourWorked << "\n";

    return 0;
}
