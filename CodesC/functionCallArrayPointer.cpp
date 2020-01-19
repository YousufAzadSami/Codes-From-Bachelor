//				ARRAY AND POINTER WORKS INTERCHANGBLY

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void callerArrayReceiverArray(int aa[])
{
	int i;
	for(i=0;i<10;i++)
	{
		aa[i] = aa[i] + 13;
	}

	for(i=0;i<10;i++)
	{
		*(aa+i) = *(aa+i) + 13;
	}	
}

void callerArrayReceiverPointer(int *aa)
{
	int i;
	for(i=0;i<10;i++)
	{
		aa[i] = aa[i] + 13;
	}

	for(i=0;i<10;i++)
	{
		*(aa+i) = *(aa+i) + 13;
	}	
}

void callerPointerReceiverArray(int aa[])
{
	int i;
	for(i=0;i<10;i++)
	{
		aa[i] = aa[i] + 13;
	}

	for(i=0;i<10;i++)
	{
		*(aa+i) = *(aa+i) + 13;
	}	
}

void callerPointerReceiverPointer(int *aa)
{
	int i;
	for(i=0;i<10;i++)
	{
		aa[i] = aa[i] + 13;
	}

	for(i=0;i<10;i++)
	{
		*(aa+i) = *(aa+i) + 13;
	}	
}

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

	char cc[100]="now this is the time for battle and r u ready?";

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

	printf("\n\nsize of a is %d\n%s ... len=%d\n\n", sizeof(cc),cp, strlen(cp));


	printf("\n\n\nArray with array declaratioin:::\n\n");

	int a[10]={5,10,15,20,25,30,35,40,45,50};

	callerArrayReceiverArray(a);
	printf("\n\nAfter calling first test Array funtion:::\n\n");
	for(i=0;i<10;i++)
	{
		printf("arrayStyle ---> %3d:::%3d ____pointerStyle ---> %3d:::%3d\n",i+1, a[i],i+1,*(a+i));
	}

	printf("\n\n");

	callerArrayReceiverPointer(a);
	for(i=0;i<10;i++)
	{
		printf("arrayStyle ---> %3d:::%3d ____pointerStyle ---> %3d:::%3d\n",i+1, a[i],i+1,*(a+i));
	}


	printf("\n\n\nArray with pointer declaratioin:::\n\n");
	int *arrayPointer;
	arrayPointer = (int*) malloc(10 * sizeof(int));
	//JUST INISIALIZATION
	for(i=0;i<10;i++)
	{
		//*(a+i) = (i+1)*5;
		arrayPointer[i] = (i+1) * 5;
	}

	for(i=0;i<10;i++)
	{
		printf("arrayStyle ---> %3d:::%3d ____pointerStyle ---> %3d:::%3d\n",i+1, arrayPointer[i],i+1,*(arrayPointer+i));
	}

	printf("\n\ncalling pointer functions:::\n\n");
	callerPointerReceiverArray(arrayPointer);
	for(i=0;i<10;i++)
	{
		printf("arrayStyle ---> %3d:::%3d ____pointerStyle ---> %3d:::%3d\n",i+1, arrayPointer[i],i+1,*(arrayPointer+i));
	}

	printf("\n\n");

	callerPointerReceiverPointer(arrayPointer);
	for(i=0;i<10;i++)
	{
		printf("arrayStyle ---> %3d:::%3d ____pointerStyle ---> %3d:::%3d\n",i+1, arrayPointer[i],i+1,*(arrayPointer+i));
	}



	

	return 0;
}