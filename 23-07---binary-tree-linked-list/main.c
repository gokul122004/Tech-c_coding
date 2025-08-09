#include <stdio.h>
#include <stdlib.h>
struct tree {
	int data;
	struct tree *left, *right;
};

struct tree *root=NULL;

void insertNode(int val) {
	struct tree createNode=(struct tree)malloc(sizeof(struct tree));
	createNode->data=val;
	createNode->left=NULL;
	createNode->right=NULL;
	if(root==NULL) {
		root=createNode;
	}
	else {
		struct tree *temp=root;
		while(1) {
			if(val<temp->data) {
				if(temp->left==NULL) {
					temp->left=createNode;
					return;
				}
				else {
					temp=temp->left;
				}
			}
			else if(val>temp->data) {
				if(temp->right==NULL) {
					temp->right=createNode;
					return;
				}
				else {
					temp=temp->right;
				}
			}
			else {
				free(createNode);
				return;
			}
		}
	}
}
void preOrder(struct tree *num) {
	if(num!=NULL) {
		printf("%d->",num->data);
		preOrder(num->left);
		preOrder(num->right);
	}
}
void inOrder(struct tree *num) {
	if(num!=NULL) {
		inOrder(num->left);
		printf("%d->",num->data);
		inOrder(num->right);
	}
}
void postOrder(struct tree *num) {
	if(num!=NULL) {
		postOrder(num->left);
		postOrder(num->right);
		printf("%d->",num->data);
	}
}
int main()
{
	int choice,data,n;

	while(1) {
		printf("1)Insert the value\n2)Pre-Order Display\n3)In-Order Display\n4)Post-Order Display\n");
		printf("Enter the choice: ");
		scanf("%d",&choice);
		switch(choice) {
		case 1: {
			printf("How many value you need to add\n");
			scanf("%d",&n);
			for(int i=0; i<n; i++) {
				printf("Enter the Value:");
				scanf("%d",&data);
				insertNode(data);
			}
			break;
		}
		case 2: {
			preOrder(root);
			break;
		}
		case 3: {
			inOrder(root);
			break;
		}
		case 4: {
			postOrder(root);
			break;
		}

		}
	}
// 	insertNode(50);
// 	insertNode(25);
// 	insertNode(75);
// 	insertNode(15);
// 	insertNode(20);
// 	insertNode(60);
// 	insertNode(70);
// 	preOrder(root);
	return 0;
}