#include<stdio.h>

int main()
{
	char a[100][100];
	int r,c,z,i,j,k;


	scanf(" %d %d %d", &r,&c,&z);

	for(i=0;i<r;i++)
	{
		
		for(j=0; j<c; j++)
		{
			scanf("%c", &a[i][j]);
		}
		
		//
		//gets(a[i]);
	}

	for(k=0; k<z; k++)
	{
		for(i=0; i<c; i++)
		{
			for(j=0;j<z;j++)
			{
				printf("%c", a[i]);
			}
		}
	}



	return 0;
}