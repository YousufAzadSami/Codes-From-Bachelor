#include<stdio.h>
#include<conio.h>
typedef struct item
{
    double weight;
    double value;
    double ratio;
} item;
//ekta sort lagbe ekhane------------------
//compare kortese--------------
void bubbleSort( item *aa, int n)
{
    int i,j;
    //struct info temp;
    item temp;

    n = n - 1;    // bcz otherwise it will get out of index


    for(i=0; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(aa[j].ratio < aa[j+1].ratio)
			{
				temp = aa[j+1];
				aa[j+1] = aa[j];
				aa[j] = temp;
			}

		}
	}
}

void showStruct(item *a, int n){
    int i;
	for(i=0; i<n ; i++){
		printf("%d :value: %lf\n", i,a[i].value);
		printf("%d :weight: %lf\n", i,a[i].weight);
		printf("%d :ratio: %lf\n\n", i,a[i].ratio);
	}
}
/*
int knapsackcondition( const*x, const *y)
{
    item *i1 = (item *)x;
    item *i2 = (item *)y;
    double ratio1 = (*i1).value*1.0 / (*i1).weight;
    double ratio2 = (*i2).value*1.0 / (*i2).weight;
    if(ratio1 < ratio2) return 1;
    else if(ratio1 > ratio2) return -1;
    else return 0;
}
*/
int main()

{
    int items;
    //clrscr();
    printf("how many items: ");
    scanf("%d",&items);
    item I[items];
    int i;
    for(i=0; i<items; i++)
    {
        printf("enter value, then weight:\n");
        scanf("%lf %lf",&I[i].value,&I[i].weight);
        I[i].ratio = I[i].value / I[i].weight;
    }

    showStruct(I, items);
    printf("\n\n\n");
//ekta sort call hobe------------------
	bubbleSort(I, items);
//knapsack condition ta call hobe so that return korte pare????

    // ei function ta just liksi struct ta show korar jonno, na dile o cholbe
    //showStruct(I, items);
    printf("\n\n\n");

    int maxWeight;
    printf("max weight: ");
    scanf("%d",&maxWeight);
    double value = 0.0;
    int presentWeight = 0;
	int weightLeftInSack = maxWeight - presentWeight;

    for(i=0; presentWeight < maxWeight && i<items; i++)
    {
       if(I[i].weight <= weightLeftInSack){
           presentWeight = presentWeight + I[i].weight;
           value = value + (I[i].value);
        }
        else{
            presentWeight = presentWeight + weightLeftInSack;
            value = value + (weightLeftInSack * I[i].ratio);
        }
        weightLeftInSack = maxWeight - presentWeight;

    }
    printf("Maximum value  %lf\n",value);
    //geth();
    return 0;
}


