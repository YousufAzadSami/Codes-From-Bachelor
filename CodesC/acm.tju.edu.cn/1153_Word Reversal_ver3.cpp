#include<stdio.h>
#include<string.h>

int main()
{
	int n,nn,i,j,k,kk,len;
	char str1[500],str2[500];

	scanf("%d",&nn);
	getchar();

	for(n=1;n<=nn;n++)
	{
		gets(str1);
		len=strlen(str1);

		k=0;
		
		for(i=0;i<len;i++)
		{
			if(str1[i]==' ')
			{
				kk=k;
				for(j=i-1,k;j>=kk;j--,k++)
					str2[k]=str1[j];

				str2[k]=' ';
				k++;
			}

			if(i==len-1)
			{
				kk=k;

				for(j=i,k;j>=kk;j--,k++)
					str2[k]=str1[j];

				str2[k]=NULL;
			}


		}


		puts(str2);
	}


	return 0;
}