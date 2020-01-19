#include<stdio.h>
#include<string.h>

int main()
{
	int i,I,j,k,len;
	char str[100];

	scanf("%d",&I);

	for(i=1;i<=I;i++)
	{
		gets(str);

		len=strlen(str);

		for(j=0;str[j]!=NULL;j++)
		{
			if(str[j]==' ' || j==len)
			{
				if(str[j]==' ')
				{
					for(k=j-1;k>=0;k--)
					{
						printf("%c",str[k]);
					}


				str[j]=' ';
				}

				else
				{
					for(k=j;k>=0 || k!=' ';k--)
					{
						printf("%c",str[k]);
					}

					str[j]=NULL;

				}


			}
		}
	}

	return 0;
}