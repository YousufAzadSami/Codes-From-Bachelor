#include<stdio.h>
#include<string.h>

int main()
{
	int i=4;
	char c=1;
	float f=4;
	double d=8;
	

	int *ip=&i;
	char *cp="I am testing pointer and their sizes\n";
	float *fp=&f;
	double *dp=&d;

	char a[100]="now this is the time for battle and r u ready?";

	printf("size of integer\t%d\n", sizeof(int));
	printf("size of char \t%d\n", sizeof(char));
	printf("size of float \t%d\n", sizeof(float));
	printf("size of double \t%d\n", sizeof(double));

	printf("\n\n\n");

	printf("size of integer\t%d\n", sizeof(i));
	printf("size of char \t%d\n", sizeof(c));
	printf("size of float \t%d\n", sizeof(f));
	printf("size of double \t%d\n", sizeof(d));

	printf("\n\n\nsizes of pointers\n\n");

	printf("size of integer\t%d\n", sizeof(ip));
	printf("size of char \t%d\n", sizeof(cp));
	printf("size of float \t%d\n", sizeof(fp));
	printf("size of double \t%d\n", sizeof(dp));

	printf("\n\nsize of a is %d\n%s ... len=%d\n\n", sizeof(a),cp, strlen(cp));




	

	return 0;
}