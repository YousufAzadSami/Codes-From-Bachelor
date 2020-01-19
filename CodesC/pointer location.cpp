#include<stdio.h>

int main()
{
	char *cp,ch;
	int *ip,i;
	float *fp,f;
	double *dp,d;

	cp=&ch;
	ip=&i;
	fp=&f;
	dp=&d;


	ch='a';
	i=50;
	f=100;
	d=150;

	printf("value of var -> %c %d %f %lf\n",ch,i,f,d);
	printf("adress of var-> %p %p %p %p\n\n",ch,i,f,d);


	printf("value of ptr -> %c %d %f %lf\n",cp,ip,fp,dp);
	printf("ardess of ptr-> %p %p %p %p\n\n",cp,ip,fp,dp);

	printf("value by pointer->%c %d %f %lf\n\n",*cp,*ip,*fp,*dp);

	cp++;
	ip++;
	fp++;
	dp++;

	printf("ardess of ptr-> %p %p %p %p\n\n",cp,ip,fp,dp);



	return 0;
}