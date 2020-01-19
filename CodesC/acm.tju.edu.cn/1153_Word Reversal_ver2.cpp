#include<stdio.h>
#include<string.h>

int main()
{
	int i,ii,j,k,kk,len;
	char str[100],str1[100];

	scanf("%d",&ii);

	//for(i=1;i<=ii;i++)
	//{
		gets(str);

		len=strlen(str);
		kk=0;

		for(j=0;j<len;j++)
		{
			if(str[j]==' ' || j==(len-1))
			{
				if(str[j]==' ')
				{
					for(k=j-1,kk;k>=0 && str[k]!=' ';kk++,k--)
					{
						str1[kk]=str[k];
					
					}


				str1[kk]=str[j];
				kk++;

				}

				if(j==len)
				{
					for(k=j,kk;k>=0 && k!=' ';k--,kk++)
					{
						str1[kk]=str[k];
					}

					str1[j+1]=NULL;

				}


			}
		}


		puts(str1);
	//}

	return 0;
}