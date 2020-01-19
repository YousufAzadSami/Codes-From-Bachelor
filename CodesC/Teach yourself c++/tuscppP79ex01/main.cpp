#include <iostream>

using namespace std;

inline int abs(int n)
{
    return (n<0 ? -n:n);
}
inline double abs(double n)
{
    return (n<0 ? -n:n);
}
inline long abs(long n)
{
    return (n<0 ? -n:n);
}

int main()
{
    cout << "the result of abs of the number " << -133 << " is " << abs(-133) << endl;
    cout << "the result of abs of the number " << 133.6865 << " is " << abs(133.6865) << endl;
    cout << "the result of abs of the number " << -123456789 << " is " << abs(-123456789) << endl;


    return 0;
}
