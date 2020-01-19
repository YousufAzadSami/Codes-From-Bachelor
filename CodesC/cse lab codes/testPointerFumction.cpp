#include<stdio.h>

int *pointer(int *a)
{
	int b;
	int *bp;

	bp = &b;

	*bp = *a * 5;

	return bp;
	
}

int main()
{
	int x=57;
	int *xp;
	int *xxp;

	xp=&x;

	xxp = pointer(xp);

	printf("the returned number is %d\n", *xxp);


	return 0;
}