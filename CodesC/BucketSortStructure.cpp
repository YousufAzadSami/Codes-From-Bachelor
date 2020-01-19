#include<stdio.h>

struct student{
	char name[20];
	int id;
};

void showInput(struct student temp){
	printf("Name : %-10s, ID :%3d\n", temp.name, temp.id);
}


void showBuckets(struct student a[][100], int index[]){

	int i, j;

	for(i=0;i<100;i++){
		if(index[i] ==0){
			//printf("%2d no bucket is empty\n", i);
		}
		else{
			printf("bucket %2d: \n", i);
			for(j=0;j<index[i];j++){
				printf("Name: %-10s, ID: %5d\n", a[i][j].name, a[i][j].id);
			}
			printf("\n\n");
		}
	}

}

void insertionSort( struct student a[], int n)
{
	int i, j;
	struct student temp;

	for(i=1; i<n ; i++)
	{
		temp = a[i];

		for( j= i-1; j>=0 ; j--)
		{
			if(a[j].id > temp.id)
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
	
	struct student a[100], final[100], temporary[100][100];
	int indexOfSpecifiedRow[100], rowDecider;
	int i,j,numOfElement, finalCounter = 0;

	// INITIALIZING "0" TO indexOfSpecifiedRow
    for(i=0;i< 100 ;i++){
        indexOfSpecifiedRow[i] = 0;
    }

    printf("How many elements u wanna input?\n");
    scanf("%d", &numOfElement);

    // TAKING INPUT
    for(i=0;i<numOfElement;i++){
		printf("Name: ");
        //gets(a[i].name);
		scanf("%s", &a[i].name);
		printf("ID: ");
		scanf("%d", &a[i].id);
    }

	// SHOWING INPUT
	for( i=0; i<numOfElement; i++){
		showInput(a[i]);
	}


	// PROCESSING BUCKETS
	for(i=0; i<numOfElement; i++){
		rowDecider = a[i].id / 10;
		temporary[rowDecider][ indexOfSpecifiedRow[rowDecider] ] = a[i];
		indexOfSpecifiedRow[rowDecider]++;
	}

	printf("\n\n");


	// SHOW BUCKETS
	showBuckets(temporary, indexOfSpecifiedRow);


	// SORTING THE BUCKET'S ELEMENTS
	printf("sorting arrays(in buckets) ...\n\n");

	for(i=0;i<100;i++){
		if(indexOfSpecifiedRow[i] != 0){
			for(j=0;j<indexOfSpecifiedRow[i];j++){
				insertionSort(temporary[i], indexOfSpecifiedRow[i]);
			}
		}
	}

	// SHOW BUCKETS
	printf("sorted buckets:\n\n");
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
	for(i=0;i<finalCounter;i++){
		showInput(final[i]);
	}

	printf("\n\n");

	return 0;
}