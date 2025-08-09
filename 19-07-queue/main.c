#include <stdio.h>
int size;
int queue[100];
int front=-1,rear=-1;

void enqueue(int val)
{
    if(rear==size-1)
    {
        printf("The Queue is Full\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=val;
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("The queue is Empty");
        return;
    }
    front++;
    printf("Deleted the Data\n");
}

void displayQueue() {
    for(int i=front;i<=rear;i++) {
        printf("%d ",queue[i]);
    }
}

int main()
{
    int n,val;
    printf("Enter the Size of the Queue:  ");
    scanf("%d",&size);
    while(1)
    {
        printf(" \n1)Enqueue\n 2)Dequeue\n 3)Display\n");
        printf("Enter the Choice:  \n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value: \n");
                scanf("%d",&val);
                enqueue(val);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3: {
                displayQueue();
            }
        }
    }

    return 0;
}