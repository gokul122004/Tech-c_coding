#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int val) 
{
    struct Node *createNode = (struct Node*) malloc(sizeof(struct Node));
    createNode->data = val;
    createNode->next = NULL;

    if(front == NULL) 
    {
        front = createNode;
    }
    else 
    {
        rear->next = createNode;
    }
    rear = createNode;
}

void dequeue()
{
    if(front == NULL)
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    
    struct Node *temp = front;
    front = front->next;

    // If front becomes NULL, rear must also be NULL
    if(front == NULL)
        rear = NULL;

    free(temp);
}

void displayQueue()
{
    struct Node *temp = front;
    if(temp == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice, val;

    printf("\n1) Enqueue\n2) Dequeue\n");
    printf("Enter a choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a value: ");
            scanf("%d", &val);
            enqueue(val);
            displayQueue();
            break;

        case 2:
            dequeue();
            displayQueue();
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
