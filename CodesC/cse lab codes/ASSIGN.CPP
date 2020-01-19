//#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>


int i;
char pre[40],in[40];


typedef struct tree{
	char n;
	tree *le,*ri;
};

tree *Bintree(int l,int h){

	tree *temp,*k;

	if(l>h)
		return NULL;

	else {

		temp = new tree;
		temp->n = pre[i];


		for(int j=0;j<strlen(pre)-1;j++){
			if (pre[i]==in[j])
				break;
				}

		i=i+1;


		if(l==h){
			temp->le = temp->ri = NULL;
			return temp;
		}

		else {
			k=Bintree(l,j-1);
			temp->le=k;
			k=Bintree(j+1,h);
			temp->ri=k;
			return temp;
		}
	}
}





void preordertrav(tree *root){

	if (root){
		cout<<" "<<root->n;

		preordertrav(root->le);
		preordertrav(root->ri);
	}

}


void inordertrav(tree *root){
	if (root){

		inordertrav(root->le);

		cout<<" "<<root->n;

		inordertrav(root->ri);
	}

}


void postordertrav(tree *root){
	if (root){

		postordertrav(root->le);
		postordertrav(root->ri);

		cout<<" "<<root->n;

	}

}


void printtree(int x,int y,int dis,tree *root){

	int rad =10;
	char a[2];
	a[0]=root->n;
	a[1]=NULL;

	if (root){
		setcolor(3);
		circle(x,y,rad);
		setcolor(14);
		outtextxy(x-3,y-15,a);

		if (root->le !=NULL){

			setcolor(4);
			line(x-10,y,x-dis,y+50);
			}

		printtree(x-dis, y+60, dis-25, root->le);

		if(root->ri !=NULL){

			setcolor(4);
			line(x+10,y,x+dis,y+50);

			}
		printtree(x+dis, y+60, dis-25, root->ri);
		}
	}






 tree *copy(tree *root){
	tree *q;

	if(root==NULL)
	     return 0;

	else
	{
		q = new tree;
		q->le = copy(root->le);
		q->ri = copy(root->ri);

		return q;
	}
}



 int nodes(tree *root){
	int q;
	if(root==NULL)
		return 0;

	else
	      q = nodes(root->le) + nodes(root->ri) + 1;
	      return q;
}








 int IT(tree *root){
	 int n = nodes(root);
	 int a;


	 if(root == NULL)
		return 0;


	 else
	      a = IT(root->le) + IT(root->ri) + (n-1);
	      return a;



 }


 int ET(tree *root){
	 int n = nodes(root);
	 int a;


	 if(root == NULL)
		return 0;


	 else
	      a = ET(root->le) + ET(root->ri) + (n+1);
	      return a;

}







 tree *mirror(tree *root){
	   tree *q;

	 if(root!=NULL){

	       q= root->le;
	       root->le = root->ri;
	       root->ri = q;

	       mirror(root->le);
	       mirror(root->ri);

	       return root;
	       }
	/* else
		return NULL;

	 }*/




 int main(void){
	clrscr();
	int l,j;
	int gd= DETECT, gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cout<<"Enter your preorder traversal :: ";
	cin>>pre;

	cout<<"Enter your inorder traversal  :: ";
	cin>>in;

	i=0;
	j=strlen(pre)-1;
	tree *head;
	tree *mir;

	head=Bintree(0,j);

	i=0;
	j=strlen(pre)-1;
	mir=Bintree(0,j);

	setcolor(15);
	settextstyle(5,0,3);

	cout<<endl<<endl<<"preorder ::";
	preordertrav(head);
	cout<<endl;

	cout<<"inorder ::";
	inordertrav(head);
	cout<<endl;

	cout<<"postorder ::";
	postordertrav(head);

	getch();
	setcolor(9);
	outtextxy(300,80,"tree");
	settextstyle(3,0,2);
	printtree(320,120,80,head);



	int c;


	cout<<endl<<endl;

	printf("MENU : \n");
	printf("1 for STRAHLER NUMBER\n");
	printf("2 for HEIGHT \n");
	printf("3 for NUMBER of NODES\n");
	printf("4 for I(T) & E(T)\n");
	printf("5 for COPY\n");
	printf("6 for MIRROR IMAGE\n\n");



	for(int g=0;g<6;g++){

	printf("Enter your choice :  ");
	scanf("%d",&c);


	switch(c)
	{
		case 1 :
			printf("Strahler number is : %d\n",str_num(head));
			printf("\n");
			 break;
		case 2 :
			printf("Height is : %d\n",height(head));
			printf("\n");
			 break;

		case 3 :
			printf("Number of nodes is : %d\n",nodes(head));
			printf("\n");
			 break;

		case 4 :
			printf("I(T) is : %d\n",IT(head));
			printf("E(T) is : %d\n",ET(head));
			printf("\n");
			 break;

		case 5 :
			copy(head);
			setcolor(9);
			outtextxy(520,80,"Copy");
			settextstyle(3,0,2);
			printtree(540,120,80,head);
			break;

		case 6 :

			mirror(mir);
			setcolor(9);
			outtextxy(300,280,"mirror");
			settextstyle(3,0,2);
			printtree(320,320,80,mir);
			break;



	}

}







	getch();

	return 0;

   }