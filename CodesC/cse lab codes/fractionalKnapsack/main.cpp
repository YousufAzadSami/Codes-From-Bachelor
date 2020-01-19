#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct info{
    double value;
    double weight;
    double vByw;
};

void bubbleSort( struct info *aa, int n)
{
    int i,j;
    struct info temp;

    n = n - 1;    // bcz otherwise it will get out of index


    for(i=0; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(aa[j].vByw < aa[j+1].vByw)
			{
				temp = aa[j+1];
				aa[j+1] = aa[j];
				aa[j] = temp;
			}

		}
	}
}

void showStruct(struct info *a, int n){
    for(int i=0; i< n ; i++){
        cout << "value of "  << i+1 << " no element: " << a[i].value << endl;
        cout << "weight of " << i+1 << " no element: " << a[i].weight << endl;
        cout << "ration of " << i+1 << " no element: " << a[i].vByw << endl;
        cout << endl;
    }
}

int main()
{
    //struct info a[100];
    int i, n;
    double maximumWeight;

    FILE *fp;

    if(( fp = fopen("input.txt", "r")) == NULL){
        cout << "cannot open file" << endl;
        exit(1);
    }

    cout << "how many elements u want to input?" << endl;
    cin >> n ;

    struct info *a = new info[n];



    /*
    for(i=0; i< n ; i++){
        cout << "enter value of " << i+1 << "no element: ";
        cin >> a[i].value;
        cout << "enter weight of " << i+1 << "no element: ";
        cin >> a[i].weight;
        a[i].vByw = (double)a[i].value/ (double)a[i].weight;
        cout << endl << endl;
    }
    */

    for(i=0; i<n ; i++){
        fscanf(fp, "%lf %lf", &a[i].value, &a[i].weight);
        a[i].vByw = (double)a[i].value / (double)a[i].weight;
    }

    fclose(fp);

    //showStruct(a, n);

    bubbleSort(a, n);
    //showStruct(a, n);
    cout << endl << endl;

    cout << "Enter the capacity/maximum weight: ";
    cin >> maximumWeight;

    double totalValue = 0;
    //double totalWeight = 0;
    double currentWeight = 0;
    double diff = maximumWeight - currentWeight;

    if((fp = fopen("output.txt", "w")) == NULL){
        cout << "cannot open file for writing" << endl;
        exit(1);
    }

    for(i=0; currentWeight<= maximumWeight && i<n ; i++){
        if(a[i].weight <= diff){
           currentWeight = currentWeight + a[i].weight;
           totalValue = totalValue + (a[i].weight*a[i].vByw);
           //cout << "element " << i << " with vByw " << a[i].vByw << " is taken whole" << endl;
           fprintf(fp, "elements with %5lf ratio is added in whole(weight=%5lf)\n", a[i].vByw, a[i].weight);
        }
        else{
            currentWeight = currentWeight + diff;
            totalValue = totalValue + (a[i].weight * a[i].vByw);
            //cout << "element " << i << " with vByw " << a[i].vByw << " is taken by fraction" << endl;
            fprintf(fp, "elements with %5lf ratio is added in fraction(weight=%lf)\n", a[i].vByw, diff);
        }
        diff = maximumWeight - currentWeight;
        //cout << "current value: " << totalValue << " diff :" << diff << endl << endl;
        //printf("diff: %5lf, currentWeight:%5lf,totalValue:%5lf \n\n",diff, currentWeight, totalValue);
    }


    //cout << "the maximum profit is: " << totalValue << endl;
    fprintf(fp, "Maximum profit is: %5lf", totalValue);

    fclose(fp);

    return 0;
}
