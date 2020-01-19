#include<stdio.h>

int main()
{
	int i,j;
	double d;
	//char s[100];

	//gets(s);
	
	
	scanf("%d",&i);
	scanf("%lf",&d);


	printf("integer==%-10d...octal==%o....hexa==%x...HEXA==%X...\n\n %n.....",i,i,i,i,&j);

	printf("the number of chareter are...%d\n\n",j);
	printf("double==%10.15lf...e==%e....E==%E\n\n",d,d,d);

	//printf("\n\n %e %E\n\n",99.231,99.231);

	printf("now with g==%g....G==%G",d,d);

	printf("%.2f",1023.03);
	
	
	//printf("string==%s\n\n",s);

	return 0;
}