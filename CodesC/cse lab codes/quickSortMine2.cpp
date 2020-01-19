#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int x[] = {24, 5, 3, 35, 14, 23, 49, 43, 2, 98, 28, 37, 81, 90, 16};

void showArray(int start, int finish){
	int i;

	for(i=start ; i<=finish ; i++){
		printf("%2d  ", x[i]);
	}
	printf("\n");
}

void quickSort(int first, int last){
	int i, j;
	int pivot, pivotIndex, temp;

	i=first;
	j=last;
	//pivot = x[ first + rand() % (last - first)];
	pivot = x[ (first+last)/2 ];

	pivotIndex = (first+last)/2;

	if((last-first) <= 1){
		return;
	}

	printf("old: ");
	showArray(first, last);
	printf("first: %2d, last: %2d, pivot: %2d,i: %2d, j: %2d\n", first, last, pivot, i, j);
	 
	while(i<j){
		while(x[i]<pivot)
			i++;
		while(x[j]>pivot)
			j--;

		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
	}

	printf("new: ");
	showArray(first, last);
	printf("first: %2d, last: %2d, pivot: %2d,i: %2d, j: %2d\n", first, last, pivot, i, j);

	printf("\n\n");

	quickSort(first, i-1);
	quickSort(i+1, last);
}
int main(){

	int size=15;

	srand ( time(NULL) );

	printf("current array: \n");

	showArray(0, size-1);

	/*
	for(int i=0;i<10;i++){
		printf("%2d ", rand() %100);
	}
	*/

	printf("\n\n");

	quickSort(0,size-1);

	printf("Sorted elements: \n");
	showArray(0,size-1);

	return 0;
}