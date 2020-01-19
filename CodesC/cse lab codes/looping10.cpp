#include<stdio.h>
void main()
{
	int i,ii,j,n1,n2,n3,n4,n5,counter=0;
	
	for(i=10000;i<10010;i++)
	{
		ii=i;

		n5=i%10;
		i=i/10;

		n4=i%10;
		i=i/10;

		n3=i%10;
		i=i/10;

		n2=i%10;

		n1=i/10;

		printf("n1=%d n2=%d n5=%d\t",n1,n2,n5);

		/*	if(n1%2==0 && n2%2==1)
			{
				for(j=2;j<=(n3/2);j++)
				{
					
					if(n3%j!=0)
					{
						if(n4!=n1 && n4!=n2 && n4!=n3 && n5!=n1 && n5!=n2 && n5!=n3)
							counter++;
					}
				}
			}*/
				
	printf("%d There are %d numbers which meet given conditions \n",ii,counter);

	}


	printf("There are %d numbers which meet given conditions \n",counter);
}