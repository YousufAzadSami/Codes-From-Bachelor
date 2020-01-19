#include<stdio.h>
#include<string.h>
#include<iostream.h>

struct tree{
	char info;
	struct tree *left, *right;
};

int i;
char pre[40],in[40];

int nodeNumber, internalNode;

struct tree *insert(struct tree *current, int x)
{
	if(current == NULL)
	{
		current = new tree;
		current->info = x;
		current ->left =NULL;
		current->right =NULL;		//ekhane ekta return dile ee tho howar 
									//kotha bt dile warning show kore 
	}
	else
	{
		if(x<current->info)
		{
			current->left = insert(current->left, x);		
		}
		else
		{
			current->right = insert(current->right, x);
		}
	}

	return current;
}

struct tree *Bintree(int l,int h)
{

	struct tree *temp,*k;

	if(l>h)
		return NULL;

	else {

		temp = new tree;
		temp->info = pre[i];


		for(int j=0;j < strlen(pre)-1 ;j++)
		{
			if (pre[i]==in[j])
				break;
		}

		i=i+1;


		if(l==h){
			temp->left = temp->right = NULL;
			return temp;
		}

		else {
			k=Bintree(l,j-1);
			temp->left=k;
			k=Bintree(j+1,h);
			temp->right=k;
			return temp;
		}
	}
}


void preOrder(struct tree *current)
{
	if(current != NULL)
	{
		printf("%c ", current->info);
		preOrder(current->left);		
		preOrder(current->right);
	}
}


void inOrder(struct tree *current)
{
	if(current != NULL)
	{
		inOrder(current->left);
		printf("%c ", current->info);
		inOrder(current->right);
	}
}

void postOrder(struct tree *current)
{
	if(current != NULL)
	{
		postOrder(current->left);		
		postOrder(current->right);
		printf("%c ", current->info);
	}
}

void nodeNo(struct tree *current)
{
	if(current != NULL)
	{
		++nodeNumber;
		nodeNo(current->left);
		nodeNo(current->right);
	}
}

int height(struct tree *current)
{
	int left,right;

	if(current == NULL)
	{
		return 0;
	}
	else
	{
		left = height(current->left ) + 1;
		right= height(current->right) + 1;

		if(left>=right)
			return left;
		else 
			return right;
	}
}

struct tree *copy(struct tree *current)
{
	if(current == NULL)
	{
		return NULL;
	}
	else
	{
		struct tree *newNode;
		newNode = new tree;
		newNode->info = current->info;

		newNode->left = copy(current->left );
		newNode->right= copy(current->right);

		return newNode;
	}
}

struct tree *mirror(struct tree *current)
{
	if(current == NULL)
	{
		return NULL;
	}
	else
	{
		struct tree *newNode;
		newNode = new tree;
		newNode->info = current->info;

		newNode->left = copy(current->right);
		newNode->right= copy(current->left );

		return newNode;
	}
}


int nodes(struct tree *root){
	int q;
	if(root==NULL)
		return 0;

	else
	      q = nodes(root->left) + nodes(root->right) + 1;
	      return q;
}



int E(struct tree *root)
{
	 int n = nodes(root);
	 int a;


	 if(root == NULL)
		return 0;


	 else
	      a = E(root->left) + E(root->right) + (n+1);
	      return a;

}


struct tree *I(struct tree *current)
{
	struct tree *left, *right;

	if(current == NULL)
		return NULL;
	else
	{
		left = I(current->left );
		right= I(current->right);
	}

	if(left!=NULL || right!=NULL)
		internalNode++;

	return current;
}

int stiehlerNumber(struct tree *root)
{
	int a,b;

	if(root==NULL)
		return 0;
	       
	a=stiehlerNumber(root->left);
	b=stiehlerNumber(root->right);

	if(a==b)
		return (a+1);
	else
	{
		if(a>b)
			return a;
		else
			return b;
	}
}


int main()
{
	int x,j;
	struct tree *root;

	root = NULL;

	/*
	while(1)
	{		
		printf("Enter value for binary tree:::(negative nunber to quit)");
		scanf(" %d", &x);

		if(x<0)
			break;

		root = insert(root,x);

	}
	*/
	// CREATING BINARY TREE

	
	printf("Enter your preorder traversal:\n");
	gets(pre);
	printf("Enter your inorder traversal:\n");
	gets(in);
	i=0;
	j=strlen(pre)-1;
	//tree *head;
	root = Bintree(0,j);


	// DISPLAYING BINARY TREE

	printf("\nPreOrder:::::\t");
	preOrder(root);
	printf("\nInOrder:::::\t");
	inOrder(root);
	printf("\nPostOrder:::::\t");
	postOrder(root);

	printf("\n\n");

	nodeNumber = 0;
	nodeNo(root);
	printf("No of nodes in the given binary trees:::%3d\n", nodeNumber);


	printf("\n\n");
	printf("The height of the tree is :::\t%2d", height(root));

	printf("\n\n");

	printf("the copy of the existing tree::::\n");
	struct tree *root2;
	root2 = copy(root);

	printf("\nPreOrder:::::\t");
	preOrder(root2);
	printf("\nInOrder:::::\t");
	inOrder(root2);
	printf("\nPostOrder:::::\t");
	postOrder(root2);

	printf("\n\n");

	printf("the mirror of the existing tree::::\n");
	struct tree *root3;
	root3 = mirror(root);

	printf("\nPreOrder:::::\t");
	preOrder(root3);
	printf("\nInOrder:::::\t");
	inOrder(root3);
	printf("\nPostOrder:::::\t");
	postOrder(root3);

	printf("\n\n");

	internalNode =0;

	
	I(root);

	printf("Internal node :::%2d\n", internalNode);
	printf("External node :::%2d\n", E(root));

	printf("\n\n");

	printf("stiehler Number:::%d", stiehlerNumber(root));


	printf("\n\n");

	return 0;
}