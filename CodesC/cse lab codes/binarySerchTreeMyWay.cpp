#include<stdio.h>

struct tree{
	int info;
	struct tree *left, *right;
};

typedef struct tree node;


node *insert(node *root, int x)
{
	if(root == NULL)
	{
		node *temp = new node;
		temp->info = x;
		temp->left = NULL;
		temp->right= NULL;
		root = temp;		
	}

	else
	{
		if(x < root->info )
			root->left = insert(root->left , x );

		else
			root->right = insert(root->right , x );
	}
	return root;

}

int main()
{
	node *root,*temp;

	int n,x;

	printf("How many elments u wanna input in binary tree?\n");
	scanf(" %d", &n);

	root = temp = NULL;

	while(n--)
	{
		scanf(" %d", &x);
		
		root = insert( root, x);
	}


	return 0;
}