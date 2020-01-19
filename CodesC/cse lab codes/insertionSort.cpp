#include<stdio.h>

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

int main()
{
	int n, a[500] , i;

	printf("how many elements do u want to insert?\n");
	scanf("%d", &n);

	printf("Insert ur array:\n");
	for(i=0; i<n ; i++)
		scanf("%d",&a[i]);



	insertionSort( a, n);

	for(i=0; i<n ; i++)
		printf("%d ",a[i]);

	printf("\n\n");

	return 0;
}