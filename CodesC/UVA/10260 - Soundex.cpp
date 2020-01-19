#include<stdio.h>
#include<string.h>

int main()
{
	char str[25],arr[25],i,j,len,n;

	while((gets(str))!=NULL)
	{
		len=strlen(str);
		n=0;

		for(i=0;i<len;i++)
		{
			if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')
			{
				arr[n++]=1;

				for(j=i;j<len;j++)
				{
					if(str[j]=='B' || str[j]=='F' || str[j]=='P' || str[j]=='V')
						str[j]=NULL;
				}
			}

			else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z')
			{
				arr[n++]=2;
				
				for(j=i;j<len;j++)
				{
					if(str[j]=='C' || str[j]=='G' || str[j]=='J' || str[j]=='K' || str[j]=='Q' || str[j]=='S' || str[j]=='X' || str[j]=='Z')
						str[j]=NULL;
				}
			}

			else if(str[i]=='D' || str[i]=='T')
			{
				arr[n++]=3;

				for(j=i;j<len;j++)
				{
					if(str[j]=='D' || str[j]=='T')
						str[j]=NULL;
				}
			}


			else if(str[i]=='L')
			{
				arr[n++]=4;

				for(j=i; j<len; j++)
					if(str[j]=='L')
						str[j]=NULL;
			}

			else if(str[i]=='M' || str[i]=='N')
			{
				arr[n++]=5;

				for(j=i; j<len; j++)
					if(str[j]=='M' || str[j]=='N')
						str[j]=NULL;
			}

			else if(str[i]=='R')
			{
				arr[n++]=6;

				for(j=i; j<len; j++)
					if(str[j]=='R')
						str[j]=NULL;
			}


		}


		for(i=0;i<n;i++)
			printf("%d",arr[i]);

		printf("\n");


	}

	return 0 ;
}