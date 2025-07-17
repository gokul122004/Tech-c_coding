#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *head = NULL;

void insertData (int val)
{
    
	struct Node *createNode = (struct Node*) malloc (sizeof(createNode));

	createNode->data = val;
	createNode->next = NULL;

	if(head==NULL)
	{
		head = createNode;
	}
	else
	{
		struct Node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = createNode;
	}
}

void printList()
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void printLimit(int n) {
	struct Node *temp = head;
	int count = 0;

	if (!temp) {
		printf("List is empty.\n");
		return;
	}

	while (temp != NULL && count < n) {
		printf("%d ", temp->data);
		temp = temp->next;
		count++;
	}
	if (count == 0)
		printf("Nothing to display.\n");

	printf("\n");
}

int main()
{
	/*int arr[10] = {5,6,7,8,4,9,2,1,3,0};

	struct Node *head = NULL, *createNode = NULL, *prevNode = NULL;

	for(int i=0;i<10;i++)
	{
	    createNode = (struct Node*) malloc (sizeof(createNode));
	    createNode->data = arr[i];
	    createNode->next = NULL;

	    if(head==NULL)
	    {
	        head = createNode;
	    }
	    else
	    {
	        prevNode->next = createNode;
	    }
	    prevNode = createNode;
	}*/


	//Static
	/*struct Node *head = NULL, *createNode = NULL, *prevNode = NULL;

	createNode = (struct Node*) malloc (sizeof(createNode));
	createNode->data = 1;
	createNode->next = NULL;
	head = createNode;
	prevNode = createNode;
	printf("%d ",head->data);


	createNode = (struct Node*) malloc (sizeof(createNode));
	createNode->data = 2;
	createNode->next = NULL;
	prevNode->next = createNode;
	prevNode = createNode;
	printf("%d ",prevNode->data);

	createNode = (struct Node*) malloc (sizeof(createNode));
	createNode->data = 3;
	createNode->next = NULL;
	prevNode->next = createNode;
	prevNode = createNode;
	printf("%d ",prevNode->data);

	createNode = (struct Node*) malloc (sizeof(createNode));
	createNode->data = 4;
	createNode->next = NULL;
	prevNode->next = createNode;
	prevNode = createNode;
	printf("%d ",prevNode->data);

	createNode = (struct Node*) malloc (sizeof(createNode));
	createNode->data = 5;
	createNode->next = NULL;
	prevNode->next = createNode;
	prevNode = createNode;
	printf("%d \n",prevNode->data);*/

    // Using function and switch case
	int c, d, l,n;

	while (1) {
		printf("\n--- Menu ---\n");
		printf("1. Insert data\n2. Display full list\n3. Display first N elements\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &c);

		switch (c) {
		case 1:
		    printf("Enter number of elements : ");
		    scanf("%d",&n);
		    for(int i=0;i<n;i++)
		    {
		        printf("Enter data to insert: ");
			    scanf("%d", &d);
			    insertData(d);
		    }
			
			
			break;
		case 2:
			printf("Linked List: ");
			printList();
			break;
		case 3:
			printf("Enter how many elements to display: ");
			scanf("%d", &l);
			printf("First %d elements: ", l);
			printLimit(l);
			break;
		case 4:
		    printf("Exiting...");
		    exit(0);
		}
	}


	return 0;
}
