#include <stdio.h>
int size;
int queue[100];
int front=-1,rear=-1;

int isFull()
{
    return ((rear+1)%size)==front;
}

int isEmpty()
{

    return front==-1;
}

void enqueueAtRear(int val)
{
    if(isFull())
    {
        printf("The Queue is Full\n");
        return;
    }
    
    if(front==-1)
    {
        front=rear=0;
    }
    else if(rear==size-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=val;
}

void enqueueAtFront(int val)
{
    if(isFull())
    {
        printf("The Queue is Full\n");
        return;
    }
    
    if(front==-1)
    {
        front=rear=0;
    }
    else if(front==0)
    {
        front = size-1;
    }
    else
    {
        front--;
    }
    queue[front]=val;
}

void dequeueAtFront()
{
    if(isEmpty())
    {
        printf("The Queue iS Empty\n");
        return;
    }
    if(rear==front)
    {
        rear=front=-1;
    }
    else if(front==size-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
}

void dequeueAtRear() 
{
    if(isEmpty()) 
    {
        printf("Queue is Empty");
        return;
    }
    
    if(rear==front)
    {
        rear=front=-1;
    }
    else if(rear==0)
    {
        rear=size-1;
    }
    else
    {
        rear--;
    }
}

void displayQueue()
{
    int i=front;
    while(i!=rear)
    {
        printf("%d\t",queue[i]);
        i=((i+1)%size);
    }
    printf("%d\n",queue[i]);
    printf("\n");
}



int main()
{
    int n,val;
    printf("Enter the size of the Array: ");
    scanf("%d",&size);
    while(1)
    {
        printf(" 1)Insert at Front\n 2)Insert at Rear\n 3)Delete at Rear\n 4)Delete at Front");
        printf("Enter Your Choice:  ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value: ");
                scanf("%d",&val);
                enqueueAtFront(val);
                displayQueue();
                break;
            }
            case 2:{
                printf("Enter the Value: ");
                scanf("%d",&val);
                enqueueAtRear(val);
                displayQueue();
                break;
            }
            case 3:{
                dequeueAtRear();
                displayQueue();
                break;
            }
            case 4:{
                dequeueAtFront();
                displayQueue();
                break;
            }
        }
    }

return 0;
} 