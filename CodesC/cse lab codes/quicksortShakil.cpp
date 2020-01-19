//QuickSort Algorithm
#include <stdio.h>
#include <stdlib.h>

int list[10],i;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int choose_pivot(int low,int high) {
	return (low+high)/2;
}
void print_list(int high)
{
    printf("%3d  ",list[0]);
    for(i=1;i<high;i++) 
		printf("%3d  ",list[i]);
    putchar('\n');
}
void quicksort(int low,int high)
{
    int j,pivot,k, temp;
    if(low<high)
    {
        k=choose_pivot(low,high);
        swap(&list[low],&list[k]);
        pivot=list[low];
        i=low+1;
        j=high;
        while(i<=j)
        {
            while(i<=high && list[i]<=pivot) 
				i++;
            while(j>=low && list[j]>pivot) 
				j--;
            if(i<j) 
				swap(&list[i],&list[j]);
        }
        //swap(&list[low],&list[j]);

		temp = list[low];
		list[low] = list[j];
		list[j] = temp;


        quicksort(low,j-1);
        quicksort(j+1,high);
    }
}
int main()
{

    for(i=0;i<10;i++) list[i]=rand()%100;
    //befor quicksort list look like
    print_list(10);
    quicksort(0,10-1);
    //after quicksort list look like
    print_list(10);
    return 0;
}
