#include<stdio.h>
#include<conio.h>
#include<string.h>

int i;
char pre[40],in[40];

typedef struct tree{    
	char n;
	tree *le,*ri;	
 };

 tree *Bintree(int l,int h)
{
	tree *temp,*k;
	int j;
	if(l>h)
	{
		return NULL;
	}
	else
	{
		temp=new tree;
		temp->n=pre[i];
		
		for(j=0;j<strlen(pre)-1;j++)
		{
			if(pre[i]==in[j])
			{
				break;
			}
		}
	   i=i+1;
	   
	   if(l==h)
	   {
		   temp->le=temp->ri=NULL;
		   return temp;
	   }
	   else
	   {
		   k=Bintree(l,j-1);
		   temp->le=k;
		   k=Bintree(j+1,h);
		   temp->ri=k;
		   return temp;
	   }
	}
}                            
        
void preordertrav(tree *root)
{
	if(root)
	{
		printf("%c\t",root->n);
		preordertrav(root->le);
		preordertrav(root->ri);
	}
}

void inordertrav(tree *root)
{
	if(root)
	{
		inordertrav(root->le);
		printf("%c\t",root->n);
		inordertrav(root->ri);
	}
}

void postordertrav(tree *root)
{
	if(root)
	{
		postordertrav(root->le);
		postordertrav(root->ri);
		printf("%c\t",root->n);
	}
}
    
int SN(tree *root)
{
	int a,b;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		a=SN(root->le);
		b=SN(root->ri);
		if(a==b)
		{
			return a+1;
		}
		else
		{
			if(a>b)
			{
				return a;
			} 
			else
			{
				return b;
			}
		}
	}
}                     
int Height(tree *root)
{
	int a,b;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		a=Height(root->le);
		b=Height(root->ri);
		if(a==b)
		{
			return a+1;
		}
		else
		{
			if(a>b)
			{
				return a+1;
			} 
			else
			{
				return b+1;
			}
		}
	}
} 
    
int Node(tree *root)
{
	if(root==NULL)
	{
		return 0;
	} 
	else
	{
		if(root->le==NULL && root->ri==NULL)
		{
			 return 1;
		}
		else
		{
			
			return Node(root->le)+Node(root->ri)+1;
		}    
	}
}           


int main()
{
	int i,j;
	printf("Enter your preorder traversal:\n");
	gets(pre);
	printf("Enter your inorder traversal:\n");
	gets(in);
	i=0;
	j=strlen(pre)-1;
	tree *head;
	head=Bintree(0,j);
	printf("PREORDER:\n");
	preordertrav(head);
	
	printf("INORDER:\n");
	inordertrav(head);
	
	printf("POSTORDER:\n");
	postordertrav(head);
	
	printf("                  \n---------------\n\nNumber of nodes:%d",Node(head));
	printf("                   \n --------------\n\nStrahler number:%d",SN(head));
	printf("                  \n--------------\n\nHeight:%d",Height(head));
	
	
	getch();
}    
        
        
            
                            
              
