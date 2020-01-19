#include<stdio.h>

int main()
{
	int i;
	double d;
	char s[100];

	gets(s);		//ai code e jodi ami gets k age use kori taile gets kaaj kore 
	scanf("%d",&i);
	scanf("%lf",&d);
	gets(s);		//kintu jodi pore use kori taile gets kono input nai na :O :O :O


	printf("integer==%10.10d\n\n",i);
	printf("double==%10.15lf\n\n",d);
	printf("string==%s\n\n",s);

	return 0;
}