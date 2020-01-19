#include <iostream>
#include <ctime>

using namespace std;

ostream &showDate (ostream &stream){
    struct tm *localt;
    time_t t;

    t = time(NULL);
    localt = localtime(&t);
    stream << asctime(localt) << endl;

    return stream;
}

int main()
{
    cout << "here we are to show date and time:\n" << endl;
    return 0;
}
