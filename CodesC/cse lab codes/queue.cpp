#include<stdio.h>
#include<conio.h>

#define SIZE 100

int a [SIZE] ,i;

int push(int k)

{
    if (k==SIZE) printf("Queue overflow");
    else{
        i=k;
        scanf("%d",&a[i]);
        k++;
    }
    return k;
}


int pop(int j,int k)

{
    i=j;
    if(i<k)
    {
        printf ("%d",a[i]);
        j++;
        return j;
    }

    else
    printf ("\t queue is empty");
    return k;
}


void display ()
{
    int p;
    if(i==0) printf ("\tQueue is empty");

    else
    {
        printf("Numbers is in queue :");
        for(p=0;p<=i;p++)
        {
            printf ("%d",a[p]);
        }
    }
}


int main()
{
    //clrscr();

    int c,j=0,k=0;

    while (1)
    {
        printf ("\n\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT \n\n");
        printf("Enter your choice:\n");
        scanf("%d",&c);

        switch (c)
        {
            case 1:
                    printf("Push the number in Queue:\n");
                    k=push(k);
                    getch();
                    break;


             case 2:

                    printf("\n Pop from Queue : \n");
                    j=pop(j,k);
                    getch();
                    break;

             case 3:

                    printf("Showing all elements :\n");
                    display ();
                    getch();
                    break;

           /*  case 4:
                        Exit(1);
                        break;*/



        }
    }

    getch();
    return 0;
}
