#include<stdio.h>

void main()
{
	int h,t;
	float c;

	printf("hardness:");
	scanf("%d",&h);

	printf("carbon:");
	scanf("%f",&c);

	printf("tensile strenth:");
	scanf("%d",&t);

	if(h>60 && c<.7 && t>5000)
		printf("grade   : 10");

	else if(h>60 && c<0.7 != t>5000)
		printf("grade   : 9");

	else if(h>60 != c<.7 && t>5000)
		printf("grade   : 8");

	else if(h>60 && t>5000 != c<.7 )
		printf("grade   : 7 ");

	//else if((h>60 || c<.7 || t>5000) &&(|(h>60 && c<.7)) && (|(c<.7 && t>5000)) && (|(t>5000 && h>60)) && (|((h>60 && c<.7 && t>5000)))
	//	printf("grade   : 6");

	
	else if(!(h>60 || c<.7 || t>5000))
		printf("grade   :5");
	
	
	else printf("grade  :6"); 


}