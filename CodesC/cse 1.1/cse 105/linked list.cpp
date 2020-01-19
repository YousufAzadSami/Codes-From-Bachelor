#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};

struct node *head;


void print()
{
   node *pn=head;
   while(pn!=NULL)
   {
		printf(" %d ", pn->info);
		pn=pn->next;
   }

   printf("\n");
}

void insert(int p)
{
	if(head==NULL)
	{
		head=(node*) malloc(sizeof(node));

		head->info=p;
		head->next=NULL;
	}

	else
	{
		node *pn= head;
		while(pn->next!=NULL)
		{
			pn=pn->next;
		}

		node *temp=(node*) malloc(sizeof(node));
		temp->info=p;
		temp->next=NULL;
		pn->next=temp;
	}
}

void main()
{
	clrscr();
	int info;

	head = NULL;

	while(1)
	{
		scanf("%d", &info);
		if(info<0) 
			break;
			
		insert(info);
	}

	print();

	printf("ha ha ha\n\n");

	getch();
}