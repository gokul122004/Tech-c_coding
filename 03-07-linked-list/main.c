#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

/*int main()
{
    struct Node *head = NULL,*createNode = NULL;
    createNode = (struct Node*) malloc(sizeof(int));
    
    createNode -> data = 10;
    createNode -> next = NULL;
    head = createNode;
    
    printf("%d",head->data);
    

    return 0;
}*/


int main()
{
    struct Node *head = NULL,*createNode = NULL,*prevNode = NULL;
    
    int n;
    printf("Enter the number of values : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the value : ");
        int val;
        scanf("%d",&val);
        
        createNode = (struct Node*) malloc(sizeof(int));
        createNode->data = val;
        createNode->next = NULL;
        
        if(head==NULL)
        {
            head=createNode;
        }
        else
        {
            prevNode->next=createNode;
        }
        prevNode = createNode;
    }
    
    struct Node *itr=head;
    while(itr!=NULL)
    {
        printf("%d ",itr->data);
        itr = itr->next;
    }
    
    
    
    
    return 0;
}























