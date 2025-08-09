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

void enqueue(int val)
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

void dequeue()
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

void dequeue()
{
    front++;
    printf("Data is Deleted\n");
}


int main()
{
    int n,val;
    printf("Enter the size of the Array: ");
    scanf("%d",&size);
    while(1)
    {
        printf(" 1)Enqueue\n 2)Dequeue\n");
        printf("Enter Your Choice:  ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value: ");
                scanf("%d",&val);
                enqueue(val);
                displayQueue();
                break;
            }
            case 2:{
              dequeue();
              displayQueue();
                break;
            }
            // case 3:{
            //     display();
            //     break;
            // }
        }
    }

return 0;
} 