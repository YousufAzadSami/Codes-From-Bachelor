#include<stdio.h>
#include<stdlib.h>

struct stack{
    int info;
    struct stack *next;
};
int top=0;

struct stack *push( struct stack *current )
{
	if(current== NULL)
	{
		//struct stack temp;
		struct stack *temp;
		temp = new stack;
		printf("Enter ur value:::");
		scanf(" %d", &temp->info);
		temp->next = NULL;
		

		return (temp);
	}
	else{
		current->next = push(current->next);
		return current;						//we dont have to return the address of current
	}										//every time, bt if i comment it it shows warning

}

struct stack *pop(struct stack *current)
{
	if(current->next == NULL)
	{
		free(current);
		return NULL;
	}
	else{
		current->next = pop(current->next);
		return current;
	}
}

void popWithoutReturnType(struct stack *current)
{
	if(((current->next)->next) == NULL)
	{
		free(current->next);
		current->next = NULL;
	}
	else{
		popWithoutReturnType(current->next);
	}
}

void show( struct stack *current )
{
    if(current == NULL)
    {
        return;
    }
    else{
		//printf("queue element ::: %d\n", current->info);
        show(current->next);
        printf("stack element ::: %d\n", current->info);
    }
}

int main()
{
    int choice;
    struct stack root, *rootPointer, *current;
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
            pop( rootPointer );
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
