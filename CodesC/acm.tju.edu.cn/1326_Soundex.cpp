#include<stdio.h>
#include<string.h>

int main()
{
	int num[25],i,j,m,len;
	char str[25];

	/*if(0 || 1 || 0 || 0 || 0)
		printf("yes\n");
	else
		printf("NO\n");*/

	while(scanf("%s",str)!=EOF)
	{
		m=0;
		len=strlen(str);

		for(i=0;i<len;i++)
		{
			if(str[i]=='B' || str[i]=='F'|| str[i]=='P' || str[i]=='B')
			{
				if(str[i-1]!='B' && str[i-1]!='F' && str[i-1]!='P' && str[i-1]!='B')
				{
					num[m]=1;
					m++;
				}
			}

			if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='X' || str[i]=='S' || str[i]=='Z')
			{
				if(str[i-1]!='C' && str[i-1]!='G' && str[i-1]!='J' && str[i-1]!='K' && str[i-1]!='Q' && str[i-1]!='X' && str[i-1]!='S' && str[i-1]!='Z')
				{
					num[m]=2;
					m++;
				}
			}

			if(str[i]=='D' || str[i]=='T')
			{
				if(str[i-1]!='D' && str[i-1]!='T')
				{
					num[m]=3;
					m++;
				}
			}


			if(str[i]=='L')
			{
				if(str[i-1]!='L')
				{
					num[m]=4;
					m++;
				}
			}


			if(str[i]=='M' || str[i]=='N') 
			{
				if(str[i-1]!='M' && str[i-1]!='N')
				{
					num[m]=5;
					m++;
				}
			}

			if(str[i]=='R')
			{
				if(str[i-1]!='R')
				{
					num[m]=6;
					m++;
				}
			}
		}


		for(j=0;j<m;j++)
			printf("%d\n",num[j]);
	}

	return 0;
}