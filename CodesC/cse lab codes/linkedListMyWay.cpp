#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

int main()
{
	int x,counter=0, elementX;
	struct node root;
	struct node *q, *temp;


	//WAY NUMBER:::1, USING A ROOT WHICH IS NOT USED FOR KEEPING VALUE

	
	q=&root;
	
	while(1)
	{
		printf("Enter ur next number (Enter negative to quit):\n");
		scanf("%d",&x);

		if(x<0)
			break;

		temp = new node;
		temp->info = x;
		temp->next = NULL;

		q->next = temp;
		q=temp;	
	}

	//q->next = NULL;


	temp = root.next;	
	counter=0;

	while(temp)
	{
		printf("%d node: %d\n", ++counter, temp->info);
		temp = temp->next;
	}


	/////////////////////////////////////////////////////////////////

	//WAY NUMBER:::2, WHICH IS USED FOR KEEPING A VALUE

	/*
	q=&root;

	while(1)
	{
		printf("Enter ur next number (Enter negative to quit):\n");
		scanf("%d",&x);

		if(x<0)
			break;

		q->info = x;
		
		temp = new node;

		q->next = temp;
		q = temp;
		temp ->next = NULL;
	}

	temp = &root;
	counter=0;

	while(temp->next)
	{
		printf("%d node: %d\n", ++counter, temp->info );
		temp = temp->next;
	}
	*/
	///////////////////////////////////////////////////////////////////

	printf("which elemnt u wanna delete?\n");
	scanf("%d", &elementX);


	temp = root.next;
	q = temp->next;
	counter =0;

	while(temp)
	{

		if(temp->info == elementX)
		{
			root.next = q;
			free(temp);
			break;
		}
		else if(q->info == elementX)
		{
			temp->next = q->next;
			free(q);
			break;
		}
	
		temp = temp->next;
		q = q->next;
	}



	temp = root.next;	
	counter=0;

	while(temp)
	{
		printf("%d node: %d\n", ++counter, temp->info);
		temp = temp->next;
	}


	/*
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
	*/

	return 0;
}