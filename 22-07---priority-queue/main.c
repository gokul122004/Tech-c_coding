#include <stdio.h>
int size;
int data[100];
int priority[100];
int ind=0;

void enqueue(int val,int pri)
{
	if(ind==size)
	{
		printf("the queue is full\n");
		return;
	}
	data[ind]=val;
	priority[ind]=pri;
	ind++;
}

void dequeue()
{
    if(ind==0) 
    {
        printf("Queue is empty");
        return;
    }
	int pos=0;
	for(int i=0; i<size-1; i++)
	{
		if(priority[i]<priority[i+1])
		{
			pos = i+1;
		}
	}
	
	for(int i=pos; i<size-1;i++)
	{
	    data[i] = data[i+1];
	    priority[i] = priority[i+1];
	}
	
	ind--;

}

void displayQueue()
{
    for(int i=0;i<ind;i++)
    {
        printf("%d-%d\t",data[i],priority[i]);
    }
}



int main()
{
	int n,val,pri;
	printf("Enter the size of the arrays: ");
	scanf("%d",&size);
	while(1)
	{
		printf("\n 1)Enter the Data and Priority\n 2)Delete the Data\n ");
		printf("\nEnter Your choice: ");
		scanf("%d",&n);
		switch(n)
		{
		case 1: {
			printf("Enter the Value and Priority: ");
			scanf("%d %d",&val,&pri);
			enqueue(val,pri);
			displayQueue();
			break;
		}
		case 2: {
			dequeue();
			displayQueue();
			break;
		}
		}
	}

	return 0;
}