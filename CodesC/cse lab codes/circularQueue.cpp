#include<stdio.h>
#include<string.h>

#define  MAX 5

int top =-1;
int down= -1;

void insert(int a[])
{
	if((top == (MAX-1) && down==-1) || top == down-1)
	{
		printf("Queue is full!\n");
	}
	else
	{
		if(top == MAX -1)
			top=-1;

		printf("Insert ur element:::");
		top++;
		scanf("%d", &a[top]);
	}
}

void deletion(int a[])
{
	if(down == MAX-1)
		down = -1;


	if(top == down)
	{
		printf("your queue is empty\n");
	}
	else
	{
		down++;
		printf("%2d no element of the queue is %3d\n", down , a[down]);
	}
}


void show(int a[])
{
	printf("Your queue is:::\n");

	for(int i=down+1; ; i++)
	{
		if(i == MAX)
			i=0;

		printf("%3d\n", a[i]);

		if(i<=top)
			break;
	}
}


int main()
{
	int a[MAX];
	char c;

	printf("Insert(1)\nDelete(2)\nShow(3)\nQuit(4)\n");
	scanf("%c", &c);

	while(1)
	{
		if(c=='1')
		{
			insert(a);
		}
		else if(c=='2')
		{
			deletion(a);
		}
		else if(c=='3')
		{
			show(a);
		}
		else if(c=='4')
		{
			break;
		}

		getchar();

		printf("Insert(1)\nDelete(2)\nShow(3)\nQuit(4)\n");
		scanf("%c", &c);

	}

	return 0;
}