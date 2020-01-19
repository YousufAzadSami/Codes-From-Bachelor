#include<stdio.h>
#include<string.h>

int main()
{
	char str[25],vow[7];
	int count_1,count_2,count_3,i,j,len,ii;

	vow[]={a,e,i,o,u};

	while(1)
	{
		gets(str);
		if(strcom(str,"end")==0)
			break;
		len=strlen(str);

		count_1=0;
		for(i=0;i<len;i++)
		{
			for(j=0;j<5;j++)
			{
				str[i]==vow[j];
				count_1=1;
				break;
			}
			if(count_1==1)
				break;
		}

		if(count_1==0)
			printf("&lt;%s> is not acceptable.",str);


		count_2=0;

		for(i=0;i<len-2;i++)
		{
			ii=i;

			for(j=0;j<6;j++)
			{
				if(str[ii]==vow[j])
				{
					count_2++;
					j=-1;
					ii++;
				}

				if(count_2==3)
					break;
			}
			if(count_2==3)
					break;
		}

		if(count_2==3)
			printf("&lt;%s> is not acceptable.",str);


		count_3=0;

		for(i=0;i<len-2;i++)
		{
			ii=i;

			for(j=0;j<6;j++)
			{
				if(str[ii]!=vow[j])
				{
					count_3++;
					j=-1;
					ii++;
				}

				if(count_3==3)
					break;
			}
			if(count_3==3)
					break;
		}

		if(count_3==3)
			printf("&lt;%s> is not acceptable.",str);




		/*for(i=0;i<len-2;i++)
		{
			for(j=0;j<6;j++)
			{
				if(str[i]==vow[j])
				{
					for(j=0;j<6;j++)
					{
						if(str[i+1]==vow[j])
						{
							for(j=0;j<6;j++)
							{
								if(str[i+2]==vow[j])
								{
									count_2=1;
								}
							}
						}
					}
				}
			}
		}


		if(count_2==1)
			printf("&lt;%s> is not acceptable.",str);*/

		count_4=0;

		for(i=0;i<len-1;i++)
		{
			if(str[i]=='e' || str[i]=='o')
				continue;
			if(str[i]==str[i+1])
			{
				coutn_4=1;
				break;
			}
		}

		if(count_4==1)
			printf("&lt;%s> is not acceptable.",str);
	}
}