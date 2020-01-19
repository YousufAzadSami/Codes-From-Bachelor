#include<stdio.h>

struct node{
	int info;
	struct node *next;
};

int main()
{
	int x;
	struct node *root, *q, *temp;

	//////////////////////////////////
	root=new node;

	printf("Enter ur first number:\n");
	scanf("%d", &root->info);

	q=root;

	printf("Enter ur next number (Enter negative to quit):\n");
	scanf("%d",&x);


	while(x>=0)
	{
		temp = new node;
		temp->info = x;

		q->next = temp;
		q=temp;


		printf("Enter ur next number (Enter negative to quit):\n");
		scanf("%d",&x);
	}

	q->next = NULL;


	temp = root;
	int counter=0;

	while(temp)
	{
		printf("%d node: %d\n", ++counter, temp->info);
		temp = temp->next;
	}


	printf("\n\n\n\n");
	int insert, insertValue;


	printf("After which node u wanna insert\n");
	scanf("%d",&insert);
	printf("what do u wanna insert?\n");
	scanf("%d", &insertValue);

	counter =0;
	q = root;

	while(q)
	{
		
		printf("%d node: %d\n", ++counter, q->info);

		if(counter == insert)
		{
			temp = new node;
			temp->info = insertValue;

			temp->next= q->next;
			q->next = temp;
		}

		q = q->next;
	}


	temp = root;
	counter=0;

	while(temp)
	{
		printf("%d node: %d\n", ++counter, temp->info);
		temp = temp->next;
	}

	return 0;
}