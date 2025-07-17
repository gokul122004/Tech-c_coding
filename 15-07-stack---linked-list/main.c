#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *top = NULL;

void push(int num) {

	for(int i=0; i<num; i++) {

		int val;
		printf("Enter the value: ");
		scanf("%d",&val);
		struct Node *createNode = (struct Node*) malloc (sizeof(struct Node));

		createNode->data = val;
		createNode->next = top;
		top = createNode;
	}
}

void pop() {
	if (top == NULL)
		printf("The stack is empty");
	top = top->next;
}

void popPosition() {
	int pos;
	printf("Enter the index value to pop (0 is top): ");
	scanf("%d", &pos);

	if (top == NULL) {
		printf("Stack is empty\n");
		return;
	}

	if (pos == 0) {
		pop();
		return;
	}

	struct Node *current = top;
	struct Node *prev = NULL;

	for (int i = 0; i < pos && current != NULL; i++) {
		prev = current;
		current = current->next;
	}

	if (current == NULL) {
		printf("Invalid position\n");
		return;
	}

	printf("Popped at index %d: %d\n", pos, current->data);
	prev->next = current->next;
	free(current);

}

void display() {
	struct Node *temp = top;
	while(temp!=NULL) {
		printf("%d",temp->data);

		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	int n;

	printf("Enter number of values:");
	scanf("%d",&n);
	push(n);
	display();
	pop();
	display();

	return 0;
}
