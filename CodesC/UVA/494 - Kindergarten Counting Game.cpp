#include<stdio.h>
#include<string.h>

int main()
{
	char str[500];
	int len,i,count;

	while(gets(str)!=NULL)
	{
		len=strlen(str);
		count = 0;

		for(i=0 ; i<len-1 ; i++)
		{

			/*
			if(count==0)
			{
				if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))	
					count++;
			}

			else
			*/
			{
				if(!((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')))
				{
					if((str[i+1] >= 'a' && str[i+1] <= 'z') || (str[i+1] >= 'A' && str[i+1] <= 'Z'))
					{
						count++;
					}
				}
			}


		}

		if(!((str[0] >= 'a' && str[0] <= 'z')||(str[0] >= 'A' && str[0] <= 'Z')))
			printf("%d\n",count);
		else
			printf("%d\n",++count);
		
	}

	return 0;
}