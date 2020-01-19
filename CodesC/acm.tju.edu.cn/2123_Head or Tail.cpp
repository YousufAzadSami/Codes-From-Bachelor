#include<stdio.h>

int main()
{
	short int n,i,mary,john;
	char a[10001];


	while(1)
	{
		scanf("%hd",&n);
		getchar();
		mary=john=0;

		if(n==0)
			break;

		for(i=0;i<n;i++)
			scanf("%s",&a[i]);

		

		for(i=0;i<n;i++)
		{
			if(a[i]=='0')
				++mary;
			if(a[i]=='1')
				++john;
			
		}

		printf("Mary won %hd times and John won %hd times\n",mary,john);		
	}


	return 0;
}