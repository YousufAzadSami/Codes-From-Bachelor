#include<stdio.h>

void showBuckets(int bucket[][100] , int index[]){

	int i,j;

	for(i=0; i<100 ; i++)
	{
		if(index[i] == 0){
			//printf("no elements in bucket no %2d", i);
		}
		else{
			printf("bucket %2d:  ", i);
			for(j=0; j<index[i] ;j++){
				printf("%2d  ", bucket[i][j]);
			}
			printf("\n\n");
		}
		//printf("\n\n");
	}

}


void insertionSort( int a[], int n)
{
	int i, temp, j;

	for(i=1; i<n ; i++)
	{
		temp = a[i];

		for( j= i-1; j>=0 ; j--)
		{
			if(a[j] > temp)
			{
				a[j+1] = a[j];
			}
			else 
				break;
		}

		a[j+1] = temp;
	}
}

int main(){
    int a[100], final[100], numOfElement;
    int temporary[100][100], indexOfSpecifiedRow[100], rowDecider;
    int i, j, finalCounter=0;

    // INITIALIZING "0" TO indexOfSpecifiedRow
    for(i=0;i< 100 ;i++){
        indexOfSpecifiedRow[i] = 0;
    }

    printf("How many elements u wanna input?\n");
    scanf("%d", &numOfElement);

    // TAKING INPUT
    for(i=0;i<numOfElement;i++){
        scanf("%d", &a[i]);
    }



    // PROCESSING BUCKETS :p
    for(i=0; i<numOfElement; i++){
        rowDecider = a[i]/10;
        temporary[rowDecider][ indexOfSpecifiedRow[rowDecider] ] = a[i];
		indexOfSpecifiedRow[rowDecider] ++;
    }

	// SHOW BUCKETS
	showBuckets(temporary, indexOfSpecifiedRow);


	// SORTING ARRAYS IN BUCKETS 
	printf("sorting arrays ...\n\n");

	for(i=0;i<100;i++){
		if(indexOfSpecifiedRow[i] != 0){
			for(j=0;j<indexOfSpecifiedRow[i];j++){
				insertionSort(temporary[i], indexOfSpecifiedRow[i]);
			}
		}
	}

	showBuckets(temporary, indexOfSpecifiedRow);

	// MERGING BUCKETS INTO ONE ARRAY
	for(i=0;i<100;i++){
		if(indexOfSpecifiedRow[i] != 0){
			for(j=0;j<indexOfSpecifiedRow[i];j++){
				final[finalCounter] = temporary[i][j];
				finalCounter++;
			}
		}
	}


	// FINAL SORTED ARRAY
	// printf("numOfElements: %d, finalCounter: %d\n", numOfElement, finalCounter);
	printf("final sorted product\n\n\n");
	for(i=0;i<finalCounter;i++)
		printf("%2d  ", final[i]);

	printf("\n\n");


    return 0;
}
