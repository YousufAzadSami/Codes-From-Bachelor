#include <cstdlib>
#include <iostream>

#define ROW 3
#define COLOUM 4

using namespace std;

int main()
{
    double a[ROW][COLOUM];
	int i,j;

    for(i=0;i<ROW;i++){
		for(j=0;j<COLOUM;j++){
			//scanf("%lf", &a[i][j]);
			cin >> a[i][j];
		}
    }

	if( a[0][0] != 1){
		for(j=0;j<COLOUM;j++){
			a[0][j] = a[0][j] / a[0][0];
		}
	}

	int devidenedOfR2 = a[1][0] / a[0][0];
	for(j=0;j<COLOUM;j++){
		a[1][j] = a[1][j] - (devidenedOfR2*a[0][j]);
	}


	int devidenedOfR3 = a[2][0] / a[0][0];
	for(j=0;j<COLOUM;j++){
		a[2][j] = a[2][j] - (devidenedOfR3*a[0][j]);
	}

	int x, y, z;
	z = a[2][3] / a[2][2];
	y = a[1][3] - (a[1][2]*z);
	y = y / a[1][1];
	x = a[0][3] - ((z * a[0][2]) + (a[0][1]*y));
	x = z / a[0][0];

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;

    return 0;
}
