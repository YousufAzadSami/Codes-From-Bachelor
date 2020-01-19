
#include<stdio.h>
#include<conio.h>

struct node
{
	int info;
	struct node *next;
};


int main()

//clrscr()
{
	struct node *root, *temp, *previous, *current;
	int x;

	root=NULL;

	printf("Enter the FIRST number:\n");
	scanf("%d", &x);

	if(root==NULL)
	{
		root=new node;

		root->info = x;
		root->next = NULL;
	}

	current = new node;
	previous = new node;


	printf("Enter the next number: (enter negative num to quit)\n");
	scanf("%d", &x);

	
	//linked list sort korar somoi 3 ta case chinta korte hobe karon same condition e linked list er prottek ta member k sort kora possible na
	//first case hoilo jodi member ta root/head/starting node er theke o choto hoi taile ki hobe? 
	//second ta hoilo jodi member ta linked list er majer j kono jigai bose
	//third ta hoilo jodi member ta linkded list er last er member(sob theke boro cz thek linked list is sorted) er theke o boro hoi
	while(x>=0)
	{

		previous = root;
		current=root->next;
		temp = new node;
		temp->info=x;


		//first case er jonno condition
		if(x < root->info) //?????
		{
			temp->next = root;
			root = temp;
		}

		//second case er jonno condition
		while(current)
		{

			// lets say linked list e ekn 15 ta member ase, aar given member ta 4 aar 5 no member er vitor bosbe
			// ei condition ta chk kortese j if "given member" ta r er theke boro AND 5 er thkee choto
			if(x>previous->info && x<current->info )//???
			{

				previous->next = temp;
				temp->next=current;
			}



			previous = previous ->next;
			current=current->next;
		}

		if(x> previous->info )
		{
			previous->next =temp;
			temp->next = NULL;
		}

		// prottek baar notun member ta newar jonno user k boltese, eita na dile o chole. just user er convenience er jonno
		printf("Enter the number: (enter negative num to quit)\n");//?????
		scanf("%d", &x);

	}

	temp = root;
	int counter=0;

	while(temp)
	{
		printf("In this linked list node is :%d\t and value is :%d\n", ++counter, temp->info);
		temp= temp->next;
	}


	getch();
	return 0;
}
