#include<stdio.h>

void quicksort(int [10],int,int);

int main(){
  int x[20] = {24, 5, 3, 35, 14, 23, 19, 43, 2};
  int size= 9,i;

  /*
  printf("Enter size of the array: ");
  scanf("%d",&size);

  printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
    scanf("%d",&x[i]);

  */
  quicksort(x,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);

  printf("\n\n");

  return 0;
}

void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

		 printf("\n\n\nold: ");
		 for(int counter=first;counter<last;counter++)
			 printf("%3d  ",x[counter]);
		 printf("\npivot: %2d, first: %2d, last: %2d\n", x[pivot], first, last);	
		 printf("i: %2d, j: %2d\n", i, j);

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;


		 printf("new: ");
		 for(counter=first;counter<last;counter++)
			 printf("%3d  ",x[counter]);
		 printf("\npivot: %2d, first: %2d, last: %2d\n", x[pivot], first, last);	
		 printf("i: %2d, j: %2d\n", i, j);

         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}