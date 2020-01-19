#include <iostream>

using namespace std;

int main()
{
    float feet, inches;

    cout << "Enter how many feet you wanna climp before you fall? \n";
    cin >> feet;

    inches = feet * 12;

    cout << "you have climbed " << inches << " inches\n\n";

    return 0;
}
