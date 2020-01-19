#include<iostream>
using namespace std;


int main(){
    int i;
    double j, k;
    float m,n ;


    int a[10] = {2,4,6,8,10};

    for(int counter=0;counter< 10 ;counter++){
        cout<< a[counter] << "\n";
    }
    cout<< "Wage:\n";
    cin>>i;

    cout<< "Hours :\n";
    cin>> j;

    cout << "3 other dicks: \n";
    cin>>k>>m>>n;

    cout<<"this is exciting, feeling a little bit uncomfortable ...\n";
    cout << i*j << "  ";
    //cout << j << "  ";
    cout << k << ' ' <<999;
    cout<<m<< ' '<<n;
    return 0;
}
