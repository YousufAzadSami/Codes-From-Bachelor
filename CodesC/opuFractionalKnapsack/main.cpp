#include <stdio.h>

int value[100];
int main(){

	int weight[100],benefit[100],big=-1000,m,n,k,w;
	//int item[100];
	int i;

	printf("Number of items:");
	scanf("%d",&n);

	for(i=0;i<n;i++){

		printf("\nitem no: %d\n",i+1);
		printf("weight:");
		scanf("%d",&weight[i]);
		printf("benefit:");
		scanf("%d",&benefit[i]);

	}

	for(i=0;i<n;i++){

	value[i]=benefit[i]/weight[i];

	printf("\nvalue of item no %d is: %d",i+1,value[i]);

	}


	printf("\n\nThe size of the sack is:");
	scanf("%d",&m);

	printf("\n\nThe chosen items would be:");

	while(m>=0){
		big=-1000;
		for(i=0;i<n;i++){
			if(value[i]>big){
				big=value[i];
			}
		}

		for(i=0;i<n;i++){
			if(value[i]==big){
				k=i;
				value[i]=-50;
				break;
			}
		}
		w=weight[k];

		if(weight[k]>m){
			while(w>m){
				w--;
			}
			m=-1;
		printf("\n%d weight is taken from item %d",w,k+1);


		}
		else{
			printf("\n%d weight is taken from item %d",weight[i],k+1);
			m=m-w;
		}
	}
return 0;
}
