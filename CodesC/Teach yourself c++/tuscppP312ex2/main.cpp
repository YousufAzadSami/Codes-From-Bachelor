#include <iostream>

using namespace std;

ostream &setHex( ostream &stream ){
    stream.unsetf(ios::dec);
    stream.setf(ios::hex);
    stream.setf(ios::uppercase);
    stream.setf(ios::showbase);

    return stream;
}

ostream &unSetHex(ostream &stream){
    stream.unsetf(ios::hex);
    // TO COME BACK TO DECIMAL, U DONT NEED TO EXPLICITLY "SET DEC", JUST UNSET THE LAST OTHER BASE
    stream.unsetf(ios::uppercase);
    stream.unsetf(ios::showbase);

    return stream;
}

int main()
{
    cout << "here is a normal number: " << 123 << endl;

    cout << setHex << "here is a hex number: " << 123 << endl;

    cout << "here is a hex number again: " << 123 << endl;

    cout << unSetHex << "here is a normal number: " << 123 << endl;
    return 0;
}
