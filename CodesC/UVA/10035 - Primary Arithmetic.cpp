#include<stdio.h>

int a[15],b[15];

int main()
{
	int i,j,max,n1,n2,count;

	while(1)
	{

		scanf("%d %d",&n1,&n2);

		if( n1==0 && n2==0)
			break;

		count=0;

		for(i=0;i<15;i++)
			a[i]=b[i]=0;

		for(i=0;n1!=0;i++)
		{
			a[i]=n1%10;
			n1=n1/10;
		}

		for(j=0;n2!=0;j++)
		{
			b[j]=n2%10;
			n2=n2/10;
		}

		if(i>j)
			max=i;
		else 
			max=j;

		for(i=0;i<max;i++)
		{
			if( (a[i] + b[i]) > 9 )
			{
				++count;
				a[i+1]=a[i+1]+1;
			}
		}

		if(count==0)
			printf("No carry operation.\n");

		else if(count==1)
			printf("%d carry operation.\n",count);

		else
			printf("%d carry operations.\n",count);
	}



	return 0;
}