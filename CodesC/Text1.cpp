#include<stdio.h>

void bubbleSort( int a[], int n)
{
    int i,j,temp;

    n = n - 1;    // bcz otherwise it will get out of index


    for(i=0; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}

		}

		for(int x=0; x<n+1; x++)
		{
		        printf("%2d ", a[x]);
		}
		printf("\n");

	}

}


int main()
{
    int a[500], n, i;

    printf("how many elements in the array?\n");
    scanf("%d", &n);

    printf("Insert ur array:\n");
    for(i=0; i<n ; i++)
        scanf("%d", &a[i]);

    printf("Original array:\n");
    for(i=0; i<n ; i++)
        printf("%2d ", a[i]);

    printf("\n\n\n");

    //printf("the length of array:%d\n\n\n", a.strlen );

    bubbleSort(a,n);


    printf("Sorted array:\n");
    for(i=0; i<n ; i++)
        printf("%2d ", a[i]);

    return 0;
}
