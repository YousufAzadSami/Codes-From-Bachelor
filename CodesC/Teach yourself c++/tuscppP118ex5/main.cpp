#include <iostream>

using namespace std;

class summation{
    int num;
    long sum;
public:
    void setSum(int n);
    void showSum(){
        cout << num << " sumed is :" << sum << endl;
    }
};

void summation :: setSum(int n){
    int i;
    num = n;

    sum = 0;

    for(i=1;i<n;i++){
        sum += i;
    }
}

summation makeSum(){
    int i;

    cout << "pls enter ur number:" << endl;
    cin >> i;

    summation ss;
    ss.setSum(i);
    ss.showSum();

    return ss;
}
int main()
{
    makeSum();

    return 0;
}
