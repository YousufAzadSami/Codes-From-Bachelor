#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void initArray(int a[][20], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = NULL;
		}
	}
}

void showArray(int a[][20], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%6d", a[i][j]);
		}
		cout << endl << endl;
	}
}

int main(){

	int edge, vertice, value;
	int i, j;

	FILE *fp;

	if((fp = fopen("input2.txt", "r"))==NULL){
		cout << "cannot open file";
		exit(1);
	}

	fscanf(fp, "%d", &vertice);
	fscanf(fp, "%d", &edge);

	//int *a;
	//a = new int[vertice][vertice];
	int a[20][20];

	initArray(a, vertice);

	for(int counter=0;counter<edge;counter++){
		fscanf(fp, "%d %d %d",&i, &j, &value);
		i--;
		j--;
		a[i][j] = value;
		a[j][i] = value;
		//cout << edge << " " << counter << endl;
	}

	//cout << endl << edge << " " << counter << endl;

	showArray(a, vertice);

	fclose(fp);
    /*
	int nextElement[20];
	int nextIndex = 0;
	int minRow, minColoum, min;
	min = 100;

	for(i=0; i<20 ;i++){
		nextElement[i] = 1;
	}

	// arbitrary vertice
	nextElement[nextIndex] = 0;
	nextIndex++;

	//not sure about this part
	counter = 0;
	while(counter < vertice)
	{
		for(i=0; i<nextIndex;i++){
			for(j=0;j<vertice;j++){
				if(a[i][j]<min){
					min = a[i][j];
					minRow = i;
					minColoum = j;
				}
			}
		}

		nextElement[nextIndex] = minRow;
		nextIndex++;
		a[minRow][minColoum] = 100;
		a[minColoum][minRow] = 100;
	}
    */
	return 0;
}
