/*
#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int i,j,a[4][4];

for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	scanf("%d",&a[i][j]);

	}
	}
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	 if(a[i][j]==1){
		printf("%d --> %d",i,j );
		printf("\n");
			}
		}
      }
/////////////////////////////////////
int c=0;
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	 if(a[i][j]==1){
		c=c+1;
			}
		}
	 printf("outdegree of %d   is   %d\n",i,c);
	  c=0;
      }

//////////////////////////////////////
c=0;
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	 if(a[j][i]==1){
		c=c+1;
			}
		}
	 printf("indegree of %d   is   %d\n",i,c);
	  c=0;
      }

////////////////////////////////////////

getch();
}
*/
//////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void main
{
int i,j,a[4][4];


for(i=0;i<4;i++)
{
for(j=0;j<4;j++) {
scanf("%d",&a[i][j]);
}
}


for(i=0;i<4;i++)
{
for(j=0;j<4;j++) {
if a[i][j]==1
	printf("1");
else printf("0");

}
printf("\n");
}





