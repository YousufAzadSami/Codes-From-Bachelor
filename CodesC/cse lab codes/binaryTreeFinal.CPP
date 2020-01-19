#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nodeNo=0;

struct tree{
	int data;
	struct tree *left,*right;
}*root;

typedef struct tree *node;

void preorderTraversal(node root);
void postorderTraversal(node root);
void inorderTraversal(node root);
void noOfNodes(node root);
int heightOfTree(node root);
node copy(node root);
node insert(int x,node T);

int main()
{
	node T =NULL;
	int data,i=0,n;


	printf("Enter num of element::\n");
	scanf("%d",&n);


	printf("\nenter your elements::\n");
	while(i<n)
	{
		scanf("%d",&data);
		T=insert(data,T);
		i++;
	}

	printf("\n\nIn Order:::\t");
	inorderTraversal(T);
	
	printf("\n\nPost Order:::\t");
	postorderTraversal(T);
	
	printf("\n\nPre Order:::\t");
	preorderTraversal(T);


	noOfNodes(T);
	printf("\n\nNumber of nodes :::%2d", nodeNo);

	printf("\n\nHeight of the tree is %2d", heightOfTree(T));

	printf("\n\n\n");

	node root2=NULL;
	root2 = copy(node T);
	return 0;
}

node insert(int x,node T)
{
	struct tree *newNode;
	newNode= new tree;
	if(newNode==NULL)
		printf("out of space\n");
	else
	{
		if(T==NULL)
		{
			newNode->data=x;
			newNode->left=NULL;
			newNode->right=NULL;
			T=newNode;
		}
		else
		{
			if(x<T->data)
				T->left=insert(x,T->left);
			else
				T->right=insert(x,T->right);
		}
	}

	return T;
}


void postorderTraversal(node root)
{
	if(root != NULL)
	{
		postorderTraversal(root->left);		
		postorderTraversal(root->right);
		printf("%2d  ", root->data);
	}
}


void preorderTraversal(node root)
{
	if(root != NULL)
	{
		printf("%2d  ", root->data);
		preorderTraversal(root->left);		
		preorderTraversal(root->right);		
	}
}

void inorderTraversal(node root)
{
	if(root != NULL)
	{
		inorderTraversal(root->left);
		printf("%2d  ", root->data);
		inorderTraversal(root->right);		
	}
}

void noOfNodes(node root)
{
	if(root!=NULL)
	{
		nodeNo++;
		noOfNodes(root->left);
		noOfNodes(root->right);
	}
}

int heightOfTree(node root)
{
	int left, right;

	if(root == NULL)
	{
		return 0;
	}

	left  = heightOfTree(root->left);
	right = heightOfTree(root->right);

	if(left>=right)
	{
		return left+1;
	}
	else
	{
		return right+1;

	}
}


///////////////////////////////////////

node copy(node root)
{
	struct tree *TT;

	if(root==NULL)
	{
		return NULL;
	}

	else
	{
		TT = new tree;
		TT->data = root->data;
		TT->left = NULL;
		TT->right= NULL;
		root= TT;
		return root;
	}
}




