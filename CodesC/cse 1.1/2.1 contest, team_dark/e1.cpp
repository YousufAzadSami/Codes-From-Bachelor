#include<stdio.h>
#include<string.h>


int main()
{
	char a[30], b[100], initial[30];

	int count=0,i,j,k;

	for(i='a'; i<='z';i++)
		initial[count++] = i;
	initial[count] = NULL;


//	gets(a);
//	gets(b);
	while(gets(a) != NULL)
	{
			gets(b);

		int len = strlen(b);

		for(i=0;i<len;i++)
		{
			for(j=0;j<=26;j++)
			{
				if(b[i]==' ')
				{
					printf(" ");
					break;
				}
				else if(b[i]==a[j])
				{
					printf("%c",initial[j]);
				}
				
			}

			
		}
		printf("\n");
	}

	

	return 0;
}