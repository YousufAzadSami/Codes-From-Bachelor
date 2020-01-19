#include <iostream>
#include <cstdio>

using namespace std;

class date{
    char d[9];
public:
    friend istream &operator>> (istream &stream, date &ob);
    friend ostream &operator<< (ostream &stream, date &ob);
};

istream &operator>> ( istream &stream, date &ob){
   gets(ob.d);

   return stream;
}

ostream &operator<< (ostream &stream, date &ob){
    puts(ob.d);

    return stream;
}

int main()
{
    date d1, d2;

    cin >> d1 ;
    cout << d1 << endl << endl;

    cin >> d2;
    cout << d2 << endl << endl;
    return 0;
}
