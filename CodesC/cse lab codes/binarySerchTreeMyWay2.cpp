#include<stdio.h>

struct tree{
	int info;
	struct tree *left, *right;
};

int nodeNumber, externalNode, internalNode;

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

void preOrder(struct tree *current)
{
	if(current != NULL)
	{
		printf("%3d ", current->info);
		preOrder(current->left);		
		preOrder(current->right);
	}
}


void inOrder(struct tree *current)
{
	if(current != NULL)
	{
		inOrder(current->left);
		printf("%3d ", current->info);
		inOrder(current->right);
	}
}

void postOrder(struct tree *current)
{
	if(current != NULL)
	{
		postOrder(current->left);		
		postOrder(current->right);
		printf("%3d ", current->info);
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

struct tree *E(struct tree *current)
{
	struct tree *left, *right;

	if(current == NULL)
		return NULL;
	else
	{
		left = E(current->left );
		right= E(current->right);
	}

	if(left==NULL && right==NULL)
		externalNode++;

	return current;
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

int main()
{
	int x;
	struct tree *root;

	root = NULL;

	// CREATING BINARY TREE
	while(1)
	{		
		printf("Enter value for binary tree:::(negative nunber to quit)");
		scanf(" %d", &x);

		if(x<0)
			break;

		root = insert(root,x);

	}


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

	internalNode = externalNode =0;

	E(root);
	I(root);

	printf("Internal node :::%2d\n", internalNode);
	printf("External node :::%2d\n", externalNode);


	printf("\n\n");

	return 0;
}