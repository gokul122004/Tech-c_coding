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

void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty");
        return;
    }
    top--;
    printf("Value is poped out\n");
}

void displayStack ()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    int n;
    printf("Enter number of values to push: ");
    scanf("%d",&n);
    push(n);
    pop();
    displayStack();

    return 0;
}
