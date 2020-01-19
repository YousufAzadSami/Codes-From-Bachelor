#include<stdio.h>
#include<string.h>



int main()
{
	char str[200],ans[200],n=0,len,i,j;

	for(i=0;i<200;i++)
		ans[i]=-48;

	printf("the arary is initialized\n");

	while((gets(str)) && str[0]!='0') 
	{
		len=strlen(str);

		for(i=len-1,j=0;i>=0;i--,j++)
		{
			if((ans[j])+(str[i]-48)>9)
			{
				ans[j]=((ans[j])+(str[i]-48))%10;
				ans[j+1]+=1;
			}

			else
			{
				ans[j]=((ans[j])+(str[i]-48));
			}


			for( ;ans[j]>9;j++)
			{
				ans[j]=(ans[j])%10;
				ans[j+1]+=1;
			}
		}


		
	}

	return 0;
}