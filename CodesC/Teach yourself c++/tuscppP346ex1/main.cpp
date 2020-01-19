#include <iostream>

using namespace std;

ostream &scientificPlusUppercase(ostream &stream){
    //stream.scientific();
    //stream.uppercase();
    stream.scientific();
    stream.uppercase();

    return stream;
}

int main()
{
    cout << "Hello world!" << endl << endl;

    cout << 22.0/7.0 << endl << endl;

    cout << scientificPlusUppercase << 22.0/7.0 << endl << endl;
    return 0;
}
