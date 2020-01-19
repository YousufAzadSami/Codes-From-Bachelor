#include<stdio.h>


int main()
{
	int a[50],b[50],i,j,aa,bb,len1,len2,count,c,x;
	

	while(1)
	{

		scanf("%d %d",&aa,&bb);

		if(aa==0 && bb==0)
			break;


		i=j=0;

		while(1)
		{
			a[i]=aa%10;
			aa=aa/10;

			if(aa==0)
				break;

			++i;
			

		}


		while(1)
		{
			b[j]=bb%10;
			bb=bb/10;

			if(bb==0)
				break;
			++j;
		}


		len1=i;
		len2=j;
		c=count=0;


		if(len1>len2)
		{
			for(i=len1,j=len2;j>=0;i--,j--)
			{
				if(c==0)
					x=a[i]+b[j];
				if(c==1)
					x=a[i]+b[j]+1;
				
				if(x>9)
				{
					++count;
					c=1;
				}
				else
					c=0;
			}

			if(c==1)
			{
				while(i>=0)
				{
					if(a[i]+1>9)
					{
						++count;
						i--;
					}
					else 
						break;
					
				}
			}
		}




		if(len2>len1)
		{
			for(i=len1,j=len2;i>=0;i--,j--)
			{
				if(c==0)
					x=a[i]+b[j];
				if(c==1)
					x=a[i]+b[j]+1;
				
				if(x>9)
				{
					++count;
					c=1;
				}
				else
					c=0;
			}

			if(c==1)
			{
				while(j>=0)
				{
					if(b[j]+1>9)
					{
						++count;
						j--;
					}
					else 
						break;
					
				}
			}
		}





		if(len1==len2)
		{
			for(i=len1,j=len2;i>=0;i--,j--)
			{
				if(c==0)
					x=a[i]+b[j];
				if(c==1)
					x=a[i]+b[j]+1;
				
				if(x>9)
				{
					++count;
					c=1;
				}
				else
					c=0;
			}

			
		}


		if(count==0)
			printf("No carry operation.\n");
		if(count==1)
			printf("%d carry operation.\n",count);
		else
			printf("%d carry operations.\n",count);

	}

	return 0;
}