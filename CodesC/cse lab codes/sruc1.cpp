#include<stdio.h>

void ip(int i);
void op(int i);


struct result{

	int ct1;
	int ct2;
	int final;
	int total;

};

struct record{

	char name[50];
	char id[20];
	
	struct result marks;


}student[5];

int main(){

	int i,n;

	printf("**Student Directory**\n\n");
	printf("Number of Students:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
		ip(i);

	for(i=0;i<n;i++)
		op(i);


}

void ip(int i){

	printf("Enter Student Name:");
	scanf("%s",student[i].name);

	
	printf("Enter Student Id:");
	scanf("%s",student[i].id);

	
	printf("Marks of Class Test 1:");
	scanf("%d",&student[i].marks.ct1);

	
	printf("Marks of Class Test 2:");
	scanf("%d",&student[i].marks.ct2);

	
	printf("Marks of Final:");
	scanf("%d",&student[i].marks.final);

	student[i].marks.total=(student[i].marks.ct1+student[i].marks.ct2+student[i].marks.final);


}

void op(int i){

	char a[50],b[20];
	int e,f,g,h;
	

	for(int j=0;j<4;j++)      //bubble sort
		for(int k=j+1;k<5;k++)
			if(student[j].marks.total>student[k].marks.total){

				e = student[j].marks.total;

				student[j].marks.total = student[k].marks.total;

				student[k].marks.total = e;


				
				f = student[j].marks.ct1;

				student[j].marks.ct1 = student[k].marks.ct1;

				student[k].marks.ct1 = f;


				
				g = student[j].marks.ct2;

				student[j].marks.ct2 = student[k].marks.ct2;

				student[k].marks.ct2 = g;



				
				h = student[j].marks.final;

				student[j].marks.final = student[k].marks.final;

				student[k].marks.final = h;



			/*	
				a = student[j].name;

				student[j].name = student[k].name;

				student[k].name = a;




				
				b = student[j].id;

				student[j].id = student[k].id;

				student[k].id = b; */


		}

	
	

	printf("\n\nStudent Name: %s\n",student[i].name);
	
	printf("Student Id: %s\n",student[i].id);

	printf("Marks of Class Test 1: %d\n",student[i].marks.ct1);

	printf("Marks of Class Test 2: %d\n",student[i].marks.ct2);

	printf("Marks of Final: %d\n",student[i].marks.final);

	printf("Total Marks: %d\n",student[i].marks.total);
	

	
}

