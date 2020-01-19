#include <iostream>
#include <climits>
#include <cstdio>
#include <cstring>
using namespace std;

struct card{
    char name[20];
    int date;
    int month;
    int year;
};

int main()
{
    struct card info[105];
    int testCase,i;
    int minIndex, maxIndex;

    cin >> testCase;

    struct card min;
    //min.name = "\0";
    strcpy(min.name, "\0");
    /*
    min.year = INT_MAX;
    min.month = INT_MAX;
    min.date = INT_MAX;
    */
    min.year = 999999;
    min.month = 999999;
    min.date = 999999;
    struct card max;
    //max.name = "\0";
    strcpy(max.name, "\0");
    max.year = 0;
    max.month = 0;
    max.date = 0;


    for(i=0;i<testCase;i++){
        //input
        //gets(info[i].name);
        scanf("%s %d %d %d",info[i].name, &info[i].date, &info[i].month, &info[i].year);

        if(min.year >= info[i].year){
            if(min.year == info[i].year){
                if(min.month >= info[i].month){
                    if(min.month == info[i].month){
                        if(min.date >= info[i].date){
                            minIndex = i;
                            min = info[i]; // OLDEST
                        }
                    }
                    else{
                        min = info[i];
                    }
                }
            }
            else{
                min = info[i];
            }
        }

        /*
        if(max.year <= info[i].year){
            if(max.month <= info[i].month){
                if(max.date <= info[i].date){
                    maxIndex = i;
                    max = info[i];
                }
            }
        }
        */

        if(max.year <= info[i].year){
            if(max.year == info[i].year){
                if(max.month <= info[i].month){
                    if(max.month == info[i].month){
                        if(max.date <= info[i].date){
                            maxIndex = i;
                            max = info[i]; // OLDEST
                        }
                    }
                    else{
                        max = info[i];
                    }
                }
            }
            else{
                max = info[i];
            }
        }
    }

    /*
    for(i=0;i<testCase;i++){
        cout << info[i].name << " " << info[i].date <<' '<<info[i].month << ' ' << info[i].year<< endl;
    }
    */
    cout << max.name <<endl;
    cout << min.name <<endl;
    return 0;
}
