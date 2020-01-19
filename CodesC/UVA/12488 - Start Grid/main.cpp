#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int noDrivers, start[30], finish[30];
    int i,j,k;
    int overtake;

    while(EOF != (scanf("%d", &noDrivers))){
        for(i=0; i<noDrivers ; i++){
            scanf("%d", &start[i]);
        }
        for(i=0; i<noDrivers ; i++){
            scanf("%d", &finish[i]);
        }
        overtake = 0;
        j = 0;
        for(i=0; i<noDrivers ; i++){
            if( finish[i]==start[j] || start[j]==NULL){
                j++;
            }
            else if(finish[i] != start[j]){
                for(k=j; ; k++){
                    if( finish[i] == start[k]){
                        start[k] = NULL;
                        break;
                    }
                    overtake++;
                }
            }
        }

        cout << overtake << endl;
    }
    return 0;
}
