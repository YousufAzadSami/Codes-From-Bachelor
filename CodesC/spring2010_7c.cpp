#include<stdio.h>

void main()
{
	 int n,i,j,k,l;

	 printf("enter the value of n:");
	 scanf("%d",&n);

	 for(i=n;n>=1;i++)
	 {
		 for(j=1;j<i;j++)
		 {
			printf(" ");
		 }


		 for(k=i;k<2n;k++)
		 {
			printf("%d",k);
		 }


		 for(l=2n-2;l<=n;l--)
		 {
			printf("%d",l);
		 }


	 }
}