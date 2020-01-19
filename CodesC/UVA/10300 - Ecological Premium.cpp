#include<stdio.h>

int main()
{
	int square,animalNumber,ecoFriendly,premium,testCase,farmers,i,j;

	scanf("%d",&testCase);

	for(i=1;i<=testCase;i++)	while()
	{
		scanf("%d",&farmers);
		premium=0;

		for(j=1;j<=farmers;j++)
		{
			scanf("%d %d %d",&square,&animalNumber,&ecoFriendly);

			premium = premium+ (square * ecoFriendly);
		}

		printf("%d\n",premium);
	}

	return 0;
}