#include<stdio.h>

int main()
{
	int a, b,n, testCase, testCaseCounter, i;
	
	scanf("%d",&testCase);

	for(testCaseCounter=1; testCaseCounter<=testCase; testCaseCounter++)
	{

		scanf("%d %d", &a,&b);

	

		n=a^b;

		int array[100], count=0;
		i=0;

		while(1)
		{
			array[i] = n%2;

			if(array[i] ==1)
				count++;
			i++;
			n= n/2;

			if(n==0)
			{
				break;
			}
		}

		printf("Case %d: %d\n",testCaseCounter, count);



	}
	return 0;
}