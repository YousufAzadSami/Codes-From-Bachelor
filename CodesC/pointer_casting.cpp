#include<stdio.h>

void main()
{
	int i= 0x41434547;

	printf("int = %x\n", i);

	int *ip = &i;

	printf("int(by pointer) = %x\n", *ip);
	

	short int *si = (short int *)ip;

	printf("int(by si pointer) = %x\n", *(si+1));


	char *cp = (char *)ip;

	printf("int(by cp pointer) = %x\n", *(cp));
}