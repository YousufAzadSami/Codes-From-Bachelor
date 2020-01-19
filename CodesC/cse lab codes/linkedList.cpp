#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

struct node
{
	int x;
	struct node *next;
};

struct node *head;

void insert(int p)
{
	if(head==NULL)
	{
		head=(node*) malloc(sizeof(node));

		head->x=p;
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
		temp->x=p;
		temp->next=NULL;
		pn->next=temp;
	}
}

void print()
{
   node *pn=head;
   while(pn!=NULL)
   {
		printf(" %d ", pn->x);
		pn=pn->next;
   }

   printf("\n");
}

int main()
{
	//clrscr();
	int x;

	head = NULL;

	while(1)
	{
		scanf("%d", &x);
		if(x<0) break;
		insert(x);
	}

	print();

	printf("ha ha ha\n\n");


	return 0;

	//getch();
}
