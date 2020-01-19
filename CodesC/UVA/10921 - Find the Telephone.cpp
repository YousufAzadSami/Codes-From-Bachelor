//WTF?????????????

#include<stdio.h>
#include<string.h>

int main()
{
	char str[40],num[40];
	int len,i;

	while(gets(str)!=NULL)
	{
		len=strlen(str);

		for(i=0;i<len;i++)
		{
			switch(str[i])
			{
			case 'A':
			case 'B':
			case 'C':
				num[i]='2';
				break;
			case 'D':
			case 'E':
			case 'F':
				num[i]='3';
				break;
			case 'G':
			case 'H':
			case 'I':
				num[i]='4';
				break;
			case 'J':
			case 'k':
			case 'L':
				num[i]='5';
				break;
			case 'M':
			case 'N':
			case 'O':
				num[i]='6';
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				num[i]='7';
				break;
			case 'T':
			case 'U':
			case 'V':
				num[i]='8';
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				num[i]='9';
				break;
				/*
			case '0':
				num[i]='0';
				break;
			case '1':
				num[i]='1';
				break;
			case '-':
				num[i]='-';
				
				break;
				*/
			default :
				num[i]=str[i];
				break;
			

			}
		}


		num[len]=NULL;

		puts(num);

		//printf("\n");
	}

	return 0;
}