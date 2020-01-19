#include<stdio.h>

int main()
{	
	int height, width, numOfPanels;

	while(scanf(" %d %d %d",&numOfPanels, &height , &width)!=EOF)
	{
		printf("%d\n", numOfPanels * height * width * 2);
	}

	return 0;
}