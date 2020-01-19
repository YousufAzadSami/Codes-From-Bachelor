#include<stdio.h>
#include<stdlib.h>

node insret(int x, node T);

sturct tree{
	int data;
	struct tree *left, *right;
}*root;


typedef struct tree *node;

int main()
{
	node T = NULL;
	int data, i=0, n;

	printf("Enter the number of elements:\n");
	scanf("%d",&n);

	printf("The elements are:\n");

	while(i<n)
	{
		scnaf("%d", &data);
		T = insert(data, T);
		i++
	}

	return 0;
}