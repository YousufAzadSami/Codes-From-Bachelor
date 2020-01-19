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

int binarySerch( int a[], int x , int n)
{
	int high, low, mid;

	low=0;
	high= n-1;


	while(high>=low)
	{

		mid =( low+high)/2;

		if(a[mid] > x)
			high = mid-1;
		else if(a[mid] < x)
			low =mid+1;
		else
			return mid;
	}


	return -1;
}

int main()
{
	int n, a[500] , i , serchElement;

	printf("how many elements do u want to insert?\n");
	scanf("%d", &n);

	printf("Insert ur array:\n");
	for(i=0; i<n ; i++)
		scanf("%d",&a[i]);

	
	insertionSort( a, n);

	for(i=0; i<n ; i++)
		printf("%d ",a[i]);
	printf("\n\n");


	//binary serch
	printf("what element u want to serch?\n");
		scanf("%d", &serchElement);


	int flag = binarySerch(a, serchElement, n);

	
	
	if(flag== -1 )
		printf("NOT FOUND!!!\n");
	else 
		printf("ur desired element is in %d index\n",flag);

	printf("\n\n");

	return 0;
}