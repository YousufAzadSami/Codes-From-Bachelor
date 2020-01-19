#include <iostream>
#include <iomanip>

using namespace std;


void gaussEleminaiton(double a[][5]){
    int i,j;
    double x,y,z;
    double  temp;

    temp=a[2][1];
    for(j=1;j<=4;j++){
        a[2][j]=a[2][j]-(temp*(a[1][j]/a[1][1]));
        a[2][j]=a[2][j]*a[1][1];

    }

    temp=a[3][1];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(temp*(a[1][j]/a[1][1]));
        a[3][j]=a[3][j]*a[1][1];
    }

    temp=a[3][2];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(temp*(a[2][j]/a[2][2]));
        a[3][j]=a[3][j]*a[2][2];
    }

    cout << endl << endl << "Final form" << endl;
    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
           cout << setw(5) << setprecision(4) << a[i][j];
        }
        cout << endl;
    }

    a[3][4]=a[3][4]/a[3][3];
    z=a[3][4];
    a[2][4]=(a[2][4]-(a[2][3]*z))/a[2][2];
    y=a[2][4];
    a[1][4]=(a[1][4]-(a[1][2]*y)-(a[1][3]*z))/a[1][1];
    x=a[1][4];


    cout << setprecision(4) << "x: " << x << endl;
    cout << setprecision(4) << "y: " << y << endl;
    cout << setprecision(4) << "z: " << z << endl;

}



void gaussJordan(double a[][5]){
    int i,j;
    double x,y,z;
    double temp;

    temp=a[2][1];

    for(j=1;j<=4;j++){
        a[2][j]=a[2][j]-(temp*(a[1][j]/a[1][1]));
        a[2][j]=a[2][j]*a[1][1];

    }

    temp=a[3][1];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(temp*(a[1][j]/a[1][1]));
        a[3][j]=a[3][j]*a[1][1];
    }

    temp=a[3][2];
    for(j=1;j<=4;j++){
        a[3][j]=a[3][j]-(temp*(a[2][j]/a[2][2]));
        a[3][j]=a[3][j]*a[2][2];
    }
    temp=a[1][2];
    for(j=1;j<=4;j++){
        a[1][j]=a[1][j]-(temp*(a[2][j]/a[2][2]));
        a[1][j]=a[1][j]*a[2][2];
    }
    temp=a[1][3];
    for(j=1;j<=4;j++){
        a[1][j]=a[1][j]-(temp*(a[3][j]/a[3][3]));
        a[1][j]=a[1][j]*a[3][3];
    }
    temp=a[2][3];
    for(j=1;j<=4;j++){
        a[2][j]=a[2][j]-(temp*(a[3][j]/a[3][3]));
        a[2][j]=a[2][j]*a[3][3];
    }

    cout << endl << endl << "Final form" << endl;
    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
           cout << setw(5) << setprecision(4) << a[i][j];
        }
        cout << endl;
    }

    x=a[1][4]/a[1][1];
    y=a[2][4]/a[2][2];
    z=a[3][4]/a[3][3];

    cout << setprecision(4) << "x: " << x << endl;
    cout << setprecision(4) << "y: " << y << endl;
    cout << setprecision(4) << "z: " << z << endl;
}


int main(){
    int i, j, n;
    double a[5][5];

    cout << "input ur matrix: " << endl;

    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
            cin >> a[i][j];
        }
    }
    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
            cout << setw(5) << setprecision(4) << a[i][j];
        }
        cout << endl;
    }

    cout << "For Gauss Elemenition method press :1" << endl;
    cout << "For Gauss jordan metod press       :2" << endl;

    cin >> n ;

    if(n==1){
        gaussEleminaiton(a);
    }
    else{
        gaussJordan(a);
    }

    return 0;
}

