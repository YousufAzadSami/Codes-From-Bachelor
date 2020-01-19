#include<stdio.h>
void main()
{
	int a,aa,b,n,tot,dig;

	for(a=1;a<=10000;a++)
	{
		aa=a;
		n=aa/10;

		for(b=n;b>=1;b--)
		{
			dig=aa%10;
			tot=tot+(dig*dig*dig);
			aa=aa/10;
		}

		tot=tot+(aa*aa*aa);

		if(tot==a)
			printf("%d\t",a);

		tot=0;
	}
}