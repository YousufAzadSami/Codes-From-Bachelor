#include <iostream>

using namespace std;

class array{
    int nums[10];
public:
    array();
    void set(int n[10]);
    void show();
    friend array operator+(array ob1, array ob2);
    friend array operator-(array ob1, array ob2);
    friend int operator==(array ob1, array ob2);
};

array :: array(){
    int i;
    for(i=0;i<10;i++){
        nums[i] = 0;
    }
}
void array :: set(int *n){
    int i;

    for(i=0;i<10;i++){
        nums[i] = n[i];
    }
}
void array::show(){
    int i;

    for(i=0;i<10;i++){
        cout << nums[i] << ' ';
    }
}
// fill the operator funtions
array operator+ (array ob1,array ob2){
    array temp;

    for(int i=0;i<10;i++){
        temp.nums[i] = ob1.nums[i] + ob2.nums[i];
    }

    return temp;
}

array operator- (array ob1, array ob2){
    array temp;

    for(int i=0; i<10; i++){
        temp.nums[i] = ob1.nums[i] - ob2.nums[i];
    }

    return temp;
}

int operator== (array ob1, array ob2){
    for(int i=0; i<10; i++){
        if(ob1.nums[i] != ob2.nums[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    array o1, o2, o3;

    int i[10] = {1,2,3,4,5,6,7,8,9,10};

    o1.set(i);
    o2.set(i);

    o1.show();
    cout << endl << endl;


    o2.show();
    cout << endl << endl;

    o3 = o1 + o2;
    o3.show();

    cout << endl << endl;

    o3 = o1 - o3;
    o3.show();

    cout << endl << endl;

    if(o1==o2){
        cout << "o1 equals o2" << endl;
    }
    else{
        cout << "o1 does not equal o2" << endl;
    }

    if(o1==o3){
        cout << "o1 equals o3" << endl;
    }
    else{
        cout << "o1 does not equal o3" << endl;
    }


    return 0;
}
