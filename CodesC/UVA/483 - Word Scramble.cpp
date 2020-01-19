#include<stdio.h>
#include<string.h>

int main()
{
	char str1[500],str2[500],i,j,m,n,spaceCount,len;

	while(gets(str1)!=NULL)
	{
		len=strlen(str1);
		m=0;

		for(i=0; i<len ; i++)
		{
			if(str1[i]==' ')
				spaceCount++;

			if((str1[i]==' ' && str1[i+1]!=' ') || i==(len-1))
			{
				for(j=i-spaceCount; str1[j]!=' ' && j>=0 ;)
				{
					str2[m++] = str1[j--];
				}

				for(n=1; n<=spaceCount; n++)
					str2[m++];

				spaceCount=0;

			}
		}

		str2[m]=NULL;
		puts(str2);

	}

	return 0;
}