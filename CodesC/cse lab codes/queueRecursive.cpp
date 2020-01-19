#include<stdio.h>
#include<stdlib.h>

struct queue{
    int info;
    struct queue *next;
};
int top=0;

struct queue *push( struct queue *current )
{
	if(current== NULL)
	{
		//struct queue temp;
		struct queue *temp;
		temp = new queue;
		printf("Enter ur value:::");
		scanf(" %d", &temp->info);
		temp->next = NULL;
		

		return (temp);
	}
	else{
		current->next = push(current->next);
		return current;
	}

}

struct queue *pop(struct queue *current)
{
	return (current->next)->next;
}

void popWithoutReturnType(struct queue *current)
{
	current->next = (current->next)->next;
}

void show( struct queue *current )
{
    if(current == NULL)
    {
        return;
    }
    else{
		printf("queue element ::: %d\n", current->info);
        show(current->next);
        //printf("stack element ::: %d\n", current->info);
    }
}

int main()
{
    int choice;
    struct queue root, *rootPointer, *current;
	root.next = NULL;

    rootPointer = &root;
	current = rootPointer;

    while(1)
    {
        printf("1.push\n2.pop\n3.show\n4.cancel\n");
        scanf(" %d", &choice);

        if(choice==1)
        {
            rootPointer = push( rootPointer );
        }else if(choice==2)
        {
            rootPointer->next = pop( rootPointer );
			//popWithoutReturnType( rootPointer );
        }else if(choice==3){
            show( rootPointer ->next );
        }else if(choice==4){
            break;
        }
        else{
            printf("Invallid choice.Try again\n");
        }
    }
    return 0;
}
