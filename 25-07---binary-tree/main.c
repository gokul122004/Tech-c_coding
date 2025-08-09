#include <stdio.h>
#include <stdlib.h>

struct Tree{
    int data;
    struct Tree *left,*right;
};

struct Tree *root=NULL;

void insertNode(int val)
{
    struct Tree *createNode  = (struct Tree*) malloc(sizeof(struct Tree));
    createNode->data = val;
    createNode->left=NULL;
    createNode->right=NULL;
    if(root==NULL)
    {
        root=createNode;
    }
    else{
        struct Tree *temp=root;
        while(1)
            if(val<temp->data)
            {
                if(temp->left==NULL)
                {
                    temp->left=createNode;
                    return;
                }
                else{
                    temp = temp->left;
                }
            }
            else
            {
                if(temp->right==NULL)
                {
                    temp->right=createNode;
                    return;
                }
                else{
                    temp = temp->right;
                }
            }
    }
}

struct Tree *search(int val)
{
    struct Tree *temp=root,*temp2=NULL;
    
    while(1)
    {
        if(temp->data==val)
        {
            return temp2;
        }
        else if(val>temp->data)
        {
            temp2=temp;
            temp=temp->right;
        }
        else{
            temp2=temp;
            temp=temp->left;
        }
    }
}

void deletion(int val)
{
    struct Tree *temp = search(val);
    if(temp->right->data==val)
    {
        if(temp->right->right==NULL && temp->right->left==NULL)
        {
            struct Tree *temp2=temp->right;
            temp->right=NULL;
            free(temp2);
        }
    }
    else
    {
        
    }
    
}
void preorder_traversal(struct Tree *root1) {
    if(root1 ==NULL)
    {
        return;
    }
    printf("%d\t",root1->data);
    preorder_traversal(root1->left);
    preorder_traversal(root1->right);
}

int main()
{
    insertNode(50);
    insertNode(40);
    insertNode(37);
    insertNode(48);
    insertNode(100);
    insertNode(90);
    insertNode(120);
    insertNode(110);
    insertNode(130);
    insertNode(105);
    printf("Before Deletion: ");
    preorder_traversal(root);
    printf("\n");
    deletion(130);
    printf("After Deletion: ");
    preorder_traversal(root);
    return 0;
}