#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define Total_Sub 4 // 4 means 3 subjects

struct student{

    char name[40];
    char id[15];
    char semester[15];
    float credit[Total_Sub];
    float gpa[Total_Sub];
    float CGPA;

};

struct student two_one[150];

void take_input(int n);
void gpa_calculation(int n);
void swap_record(int,int); //i think akhane vuul ase
void sort_student(int n);
void print_result(int n);

int main (void){

    int n;
    printf("\n\n\tHow many students ::");
    scanf("%d",&n);

    take_input(n);
    gpa_calculation(n);
    sort_student(n);
    print_result(n);

    //getch();

}

void take_input(int n){
    printf("\n\n\tGive information for %d students...\n\n",n);
    for(int i=1;i<=n;i++){
        printf("\n\n\tEnter info for student#%d\n\n",i); //# kahini bujhi nai

        printf("\tName::");
        scanf("%s",two_one[i].name);

        printf("\tID::");
        scanf("%s",two_one[i].id);

        printf("\tSemester::");
        scanf("%s",two_one[i].semester);

        for(int j=1;j<Total_Sub;j++){
            //printf("\tEnter credit for sub [#%d]::",j);
            //scanf("%f",&two_one[i].credit[j]);


            printf("\tEnter GPA for sub [#%d]::",j);
            scanf("%f",&two_one[i].gpa[j]);
        }

    }

    printf("\tSemester ::");
    scanf("%s",two_one[1].semester);

    for(int i=1;i<=n;i++)
        strcpy(two_one[i].semester,two_one[1].semester);

    for(int j=1;j<Total_Sub;j++){

        printf("\tEnter credit for sub [#%d]::",j);
        scanf("%f",&two_one[1].credit[j]);

        for(int i=2;i<=n;i++)
            two_one[i].credit[j]=two_one[1].credit[j];

    }

}



void gpa_calculation(int n){

    float x,y;

    for(int i=1;i<=n;i++){
        x=0.0;
        for(int j=1;j<Total_Sub;j++){

            x+=two_one[i].credit[j]*two_one[i].gpa[j];
            y+=two_one[i].credit[j];
        }

        two_one[i].CGPA = x/y;
    }
}


void swap_record(int i,int j){
    char tname[40];
    char tid[15];
    //char tsemester[15];
    //float tcredit[6];
    float tgpa[Total_Sub];
    float tCGPA;

    strcpy(tname,two_one[i].name);
    strcpy(two_one[i].name, two_one[j].name);
    strcpy(two_one[j].name,tname);


    strcpy(tid,two_one[i].id);
    strcpy(two_one[i].id, two_one[j].id);
    strcpy(two_one[j].id,tid);

    int loop;

    for(loop=1;loop<Total_Sub;loop++)
        tgpa[loop]=two_one[i].gpa[loop];

    for(loop=1;loop<Total_Sub;loop++)
        two_one[i].gpa[loop] = two_one[j].gpa[loop];

    for(loop=1;loop<Total_Sub;loop++)
        two_one[j].gpa[loop] = tgpa[loop];

    tCGPA = two_one[i].CGPA;
    two_one[i].CGPA = two_one[j].CGPA;
    two_one[j].CGPA = tCGPA;

    }

void sort_student(int n){

    int i,j;

    for(i=1;i<n;i++)
        for(j=1;j<n-i;j++)
            if(two_one[j].CGPA<two_one[j+1].CGPA)

            swap_record(j,j+1);
}

void print_result(int n){
    printf("\n\n\tFinal result for %d students...\n\n",n);

    for(int i=1;i<=n;i++){
        printf("\n\n\tStudents Name :: ");
        puts(two_one[i].name);

        printf("\n\tStdents ID::");
        puts(two_one[i].id);


        printf("\n\tStdents CGPA::%f",two_one[i].CGPA);
    }
}
