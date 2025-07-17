#include <stdio.h>
#include <stdlib.h>

int size = 10;
int top = -1;
int stack[10];

void push(int val)
{
    int ele;
    for(int i=0;i<val;i++)
    {
        printf("\nEnter element:");
        scanf("%d",&ele);
        
        if(top+1 == size)
        {
            printf("The Stack is full");
            break;
        }
        else
        {
           stack[++top] = ele;
        }
    }
}

void popElement(int ele)
{
    if(top==-1)
    {
        printf("Stack is Empty");
        return;
    }
    
    int temp[10];
    int ttop = -1;

    while(top > ele)
    {
        temp[++ttop] = stack[top--];
    }

    top--;

    while(ttop >= 0)
    {
        stack[++top] = temp[ttop--];
    }
}

void displayStack ()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}

int main()
{
    int n,a;
    printf("Enter number of values to push: ");
    scanf("%d",&n);
    push(n);
    displayStack();
    
    
    printf("\nEnter the element to pop: ");
    scanf("%d",&a);
    popElement(a);

    displayStack();

    return 0;
}











