#include<stdio.h>
#include<stdlib.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode *left;
	struct BinaryTreeNode *right;
	BTDataType data;
}BTNode;

//前序遍历
void PrevNode(BTNode *parents)
{
	if (parents == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%c ", parents->data);
	PrevNode(parents->left);
	PrevNode(parents->right);
}

//中序遍历
void InNode(BTNode *parents)
{
	if (parents == NULL)
	{
		printf("NULL ");
		return;
	}

	InNode(parents->left);
	printf("%c ", parents->data);
	InNode(parents->right);
}

//后序遍历
void PostNode(BTNode *parents)
{
	if (parents == NULL)
	{
		printf("NULL ");
		return;
	}

	PostNode(parents->left);
	PostNode(parents->right);
	printf("%c ", parents->data);

}


BTNode* CreatBinaryTreeNode(BTDataType x)
{
	BTNode *pl = (BTNode*)malloc(sizeof(BTNode));
	if (!pl)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	pl->data = x;
	pl->left = pl->right = NULL;
	return pl;
}

// 二叉树销毁
void BinaryTreeDestory(BTNode** root);

// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right)+1;

}


// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else if ((root->left == NULL) && (root->right == NULL))
		return 1;
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);

}


// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	else if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);

}


// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	else if (root->data == x)
	{
		BTNode *node = (BTNode*)malloc(sizeof(BTNode));
		node->data = x;
		node->left = root->left;
		node->right = root->right;

		return root;
	}

	BinaryTreeFind(root->left, x);
	BinaryTreeFind(root->right, x);
	
}


int main()
{
	BTNode* A = CreatBinaryTreeNode('A');
	BTNode* B = CreatBinaryTreeNode('B');
	BTNode* C = CreatBinaryTreeNode('C');
	BTNode* D = CreatBinaryTreeNode('D');
	BTNode* E = CreatBinaryTreeNode('E');
	BTNode* F = CreatBinaryTreeNode('F');

	A->left = B;
	B->left = D;
	A->right = C;
	C->left = E;
	C->right = F;
	D->left = D->right = E->left = E->right = F->left = F->right = B->right = NULL;

	PrevNode(A);
	printf("\n");

	InNode(A);
	printf("\n");

	PostNode(A);
	printf("\n");

	printf("%d\n", BinaryTreeSize(A));

	//叶子节点
	printf("%d\n", BinaryTreeLeafSize(A));

	//第k层的节点数
	printf("%d\n", BinaryTreeLevelKSize(A, 2));
	printf("%d\n", BinaryTreeLevelKSize(A, 3));

	BinaryTreeFind(A, 'E');
	return 0;
}