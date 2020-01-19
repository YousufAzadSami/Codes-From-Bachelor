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

	if((fp = fopen("input.txt", "r"))==NULL){
		cout << "cannot open file";
		exit(1);
	}

	fscanf(fp, "%d", &vertice);
	fscanf(fp, "%d", &edge);

	//int *a;
	//a = new int[vertice][vertice];
	int a[20][20];

	initArray(a, vertice);

	//for(int counter=0;(!feof(fp));counter++){
	while(!(feof(fp))){
		fscanf(fp, "%d %d %d",&i, &j, &value);
		i--;
		j--;
		a[i][j] = value;
		a[j][i] = value;
		//cout << edge << " " << counter << endl;
	}

	//cout << endl << edge << " " << counter << endl;

	showArray(a, vertice);
	cout << endl << endl << endl;

	fclose(fp);

	if(NULL == (fopen("outPut.txt", "w"))){
		cout << "cannot open file"<< endl;
		exit(1);
	}

	int *flagArray;
	flagArray = new int[vertice];
	int minRow, minColoum, min;
	min = 1000;
	int totalCost = 0;

	for(i=0; i<vertice ;i++){
		flagArray[i] = 1;
	}

	// arbitrary vertice
	flagArray[0] = 0;

	//not sure about this part
	int counter = 0;
	// if vertice is 7
	// then 0-6 matrix
	// which means MST needs only 6(0-5)
	while(counter < (vertice - 1) )
	{
		for(i=0; i<vertice;i++){
		    if(flagArray[i] == 0)
		    {
                for(j=0;j<vertice;j++){
                    if(a[i][j]<min && flagArray[j]==1 && a[i][j]!=NULL){
                        min = a[i][j];
                        minRow = i;
                        minColoum = j;
                    }
                }
		    }
		}

		//nextElement[nextIndex] = minRow;
		//nextIndex++;
		totalCost = totalCost + min;
		cout << minRow << " to " << minColoum << "cost: " << min << "::cost so far: " << totalCost << endl;;
		fprintf(fp, "%2d to %2d, cost: %2d, cost so far: %2d\n",minRow, minColoum, min, totalCost);
		flagArray[minColoum] = 0;
		a[minRow][minColoum] = 1000;
		a[minColoum][minRow] = 1000;
		counter++;
		min = 1000;
	}

	fprintf(fp,"\n\nTotal cost of the minimun spanning tree is: %3d", totalCost);

	fclose(fp);

	return 0;
}
