#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};


void insertData(int val, struct Node **head, struct Node **prevNode) {
    struct Node *createNode = (struct Node*)malloc(sizeof(struct Node));
    createNode->data = val;
    createNode->next = NULL;
    
    
    if (*head == NULL) {
        *head = createNode;
    } else {
        (*prevNode)->next = createNode;
    }
    
    *prevNode = createNode;
}


void printList(struct Node *head)
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void binarySearch(int arr[],int target,int num)
{
    int left=0,right=num-1,mid;
    
    while(left<=right)
    {
        mid = left+(right-left)/2;
        
        if(target == arr[mid])
        {
            printf("Target Found");
            return;
        }
        else if(target>arr[mid])
        {
            left = mid+1;
        }
        else if(target < arr[mid])
        {
            right = mid-1;
        }
    }
    
    printf("Target Not Found");
    
}

int main()
{
    
    // Selection sort
    
    /*printf("-----Selection sort-----");
    int arr[50],num;
    printf("\nEnter the nummber of elements : ");
    scanf("%d",&num);
    
    for(int i=0;i<num;i++)
    {
        printf("Enter the elements : ");
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<num;i++)
    {
        int min = i;
        
        for(int j=i+1;j<num;j++)
        {
            if(arr[min]>arr[j]) min = j;
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        
    }
    
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    
    // Binary Search
    
    printf("\n-----Binary Search-----");
    int tar;
    printf("\nEnter the target : ");
    scanf("%d",&tar);
    
    binarySearch(arr,tar,num);*/
    
    
    // Linked List
    
    struct Node *head = NULL,*prevNode = NULL;
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
			    insertData(d,&head,&prevNode);
		    }
			break;
		case 2:
			printf("Linked List: ");
			printList(head);
			break;
		case 3:
		    printf("Exiting...");
		    exit(0);
		}
	}

    return 0;
}
























