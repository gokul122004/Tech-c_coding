#include <stdio.h>
#include <stdlib.h>

// Double Linked List
/*struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node *head = NULL;

void insertData(int val) {
    struct Node *createNode = (struct Node*)malloc(sizeof(struct Node));
    createNode->data = val;
    createNode->next = NULL;
    createNode->prev = NULL; 
    
    if (head == NULL) {
        head = createNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = createNode;
        createNode->prev = temp; 
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

int main()
{
	int c, d, n;

	while (1) {
		printf("\n--- Menu ---\n");
		printf("1. Insert data\n2. Display full list\n3. Exit\n");
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
		    printf("Exiting...");
		    exit(0);
		}
	}
	
	return 0;
}*/

	
	// Circle Linked List

struct Node {
    int data;
    struct Node *next;
};

void insertData(struct Node **head, int val) 
{
    struct Node *createNode = (struct Node*) malloc(sizeof(struct Node));
    createNode->data = val;
    createNode->next = NULL;

    if (*head == NULL) 
    {
        *head = createNode;
        (*head)->next = *head;
    } 
    else 
    {
        struct Node *temp = *head;
        while (temp->next != *head)
            temp = temp->next;

        temp->next = createNode;
        createNode->next = *head;
    }
}

void printList(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    int first = 1;

    while (temp != head || first) {
        printf("%d ", temp->data);
        temp = temp->next;
        first = 0;
    }

    printf("\n");
}


int main() {
    struct Node *head = NULL;
    int c, d, n;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert data\n2. Display full list\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Enter number of elements : ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Enter data to insert: ");
                    scanf("%d", &d);
                    insertData(&head, d);
                }
                break;
            case 2:
                printf("Linked List: ");
                printList(head);
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
        }
    }

    return 0;
}





