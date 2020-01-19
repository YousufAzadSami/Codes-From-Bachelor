#include<stdio.h>
#include<string.h>

int main()
{
	char str[25],arr[25],i,len,n;

	while((gets(str))!=NULL)
	{
		len=strlen(str);
		n=0;

		for(i=0;i<len;i++)
		{
			if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')
			{
				if(str[i+1]!='B' && str[i+1]!='F' && str[i+1]!='P' && str[i+1]!='V')
				
				arr[n++]=1;
				/*
				for(j=i;j<len;j++)
				{
					if(str[j]=='B' || str[j]=='F' || str[j]=='P' || str[j]=='V')
						str[j]=NULL;
				}
				*/
				/*

				if(n>0 && arr[n-1]!=1)
					arr[n++]=1;
				else if(n==0)
					arr[n++]=1;
				*/
			}

			else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z')
			{
				if(str[i+1]!='C' && str[i+1]!='G' && str[i+1]!='J' && str[i+1]!='K' && str[i+1]!='Q' && str[i+1]!='S' && str[i+1]!='X' && str[i+1]!='Z')
					arr[n++]=2;
				/*
				
				for(j=i;j<len;j++)
				{
					if(str[j]=='C' || str[j]=='G' || str[j]=='J' || str[j]=='K' || str[j]=='Q' || str[j]=='S' || str[j]=='X' || str[j]=='Z')
						str[j]=NULL;
				}
				*/
				/*

				if(n>0 && arr[n-1]!=2)
					arr[n++]=2;
				else if(n==0)
					arr[n++]=2;
				*/
			}

			else if(str[i]=='D' || str[i]=='T')
			{
				if(str[i+1]!='D' && str[i+1]!='T')
					arr[n++]=3;

				/*

				for(j=i;j<len;j++)
				{
					if(str[j]=='D' || str[j]=='T')
						str[j]=NULL;
				}
				*/
				/*

				if(n>0 && arr[n-1]!=3)
					arr[n++]=3;
				else if(n==0)
					arr[n++]=3;
				*/
			}


			else if(str[i]=='L')
			{
				if(str[i+1]!='L')				
					arr[n++]=4;
				/*
				for(j=i; j<len; j++)
					if(str[j]=='L')
						str[j]=NULL;
				*/
				/*

				if(n>0 && arr[n-1]!=4)
					arr[n++]=4;
				else if(n==0)
					arr[n++]=4;
				*/
			}

			else if(str[i]=='M' || str[i]=='N')
			{
				if(str[i+1]!='M' && str[i+1]!='N')
					arr[n++]=5;

				/*
				for(j=i; j<len; j++)
					if(str[j]=='M' || str[j]=='N')
						str[j]=NULL;
				*/
				/*

				if(n>0 && arr[n-1]!=5)
					arr[n++]=5;
				else if(n==0)
					arr[n++]=5;
				*/
			}

			else if(str[i]=='R')
			{
				if(str[i+1]!='R')
					arr[n++]=6;
				/*

				for(j=i; j<len; j++)
					if(str[j]=='R')
						str[j]=NULL;
				*/
				/*

				if(n>0 && arr[n-1]!=6)
					arr[n++]=6;
				else if(n==0)
					arr[n++]=6;
				*/
			}


		}


		for(i=0;i<n;i++)
			printf("%d",arr[i]);

		printf("\n");


	}

	return 0;
}