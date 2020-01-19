#include<stdio.h>
#include<string.h>

int main()
{
	int n,nn,i,j,count,sum,len;
	char str[81];

	scanf("%d",&nn);
	getchar();

	for(n=1;n<=nn;n++)
	{
		gets(str);

		len=strlen(str);

		sum=0;

		for(i=len-1;i>=0;i--)
		{
			count=0;

			if(str[i]=='O')
			{
				++count;

				for(j=i-1;str[j]=='O';j--)
					++count;
			}

			
			
			sum=sum+count;
		}


		printf("%d\n",sum);
	}

	return 0;
}