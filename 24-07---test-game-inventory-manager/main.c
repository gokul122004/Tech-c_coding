#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
	char item[50];
	struct Node *next;
};

struct Node *stackTop = NULL;
struct Node *queueRear = NULL;
struct Node *queueFront = NULL;

void pickItem()
{
	char val[50];
	printf("Enter the picked item:");
	scanf("%s",val);

	struct Node* createNode = (struct Node*)malloc(sizeof(struct Node));

	for(int i=0; i<strlen(val); i++)
	{
		createNode->item[i] = val[i];
	}

	createNode->next = stackTop;
	stackTop = createNode;
	printf("Picked: %s\n", val);
}


void craftItem()
{
	char val[50];
	printf("Enter the picked item:");
	scanf("%s",val);

	struct Node* createNode = (struct Node*)malloc(sizeof(struct Node));

	for(int i=0; i<strlen(val); i++)
	{
		createNode->item[i] = val[i];
	}

	createNode->next = NULL;

	if (queueRear == NULL)
	{
		queueFront = queueRear = createNode;
	}
	else
	{
		queueRear->next = createNode;
		queueRear = createNode;
	}
	printf("Crafted: %s\n", val);
}

void inventory()
{
	printf("FULL INVENTORY\n");

	struct Node *front = queueFront;
	while(front!=NULL)
	{
		printf("%s\n",front->item);
		front = front->next;
	}

	struct Node *top = stackTop;
	while(top!=NULL)
	{
		printf("%s\n",top->item);
		top = top->next;
	}

}

int main()
{
	printf("\tGame Inventory Manager\n\n");
	
	int choice;


	while(1)
	{
	    printf("\n 1) Pick\n 2) Craft\n 3) Inventory\n");
	    
		printf("\nEnter your Choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1: {
			pickItem();
			break;
		}
		case 2: {
			craftItem();
			break;
		}
		case 3: {
			inventory();
			break;
		}
		}
	}



	return 0;
}
