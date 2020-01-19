#include<stdio.h>
#include<string.h>

int main()
{
	int i,count,len;
	char dummy,ch,str[205];

	while(scanf("%c ",&ch)!=EOF)
	{
		//dummy=getchar();
		//gets(str);
		dummy=getchar();

		for(i=0;;i++)
		{
			scanf("%c",str[i]);

			if(str[i]=='\n')
				break;
		}
		len=strlen(str);

		for(i=0;i<len;i++)
		{
			if(ch==str[i])
				++count;
		}

		printf("\n\nlen=%d...%d....%s\n",len,count,str);
	}

	return 0;
}