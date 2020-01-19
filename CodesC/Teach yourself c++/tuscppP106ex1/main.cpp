// DOESN'T WORK AS EXPECTED

#include <iostream>

using namespace std;

class who{
    int id;
public:
    who(int);
    ~who();
};

who :: who(int i){
    id = i;
    cout << "constructing : " << id << endl;
}
who :: ~who() {
    cout << "destroying : " << id << endl;
}

who make_who(){
    cout << "in function"<<endl;
    who w2(2);
    return w2;
}

int main()
{
    cout << "in main:" << endl;
    who w1(1);

    make_who();
    cout << "returned from function:" << endl;
    return 0;
}
