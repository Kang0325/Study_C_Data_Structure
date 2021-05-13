#include <stdio.h>

typedef struct node
{
	int data;
	struct node* link;
} Node;

void addNode(Node* target, int data)
{
	Node* newNode = malloc(sizeof(Node));
	
	newNode->data = data;
	newNode->link = target->link;
	target->link = newNode;
}

int main()
{
	int i = 1;
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;
	addNode(head, 10);
	addNode(head, 20);
	addNode(head, 30);
	addNode(head, 40);
	addNode(head, 50);

	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d번째 노드 데이터 : %d\n", i, curr->data);
		curr = curr->link;
		i++;
	}

	Node* temp;
	curr = head->link;
	while (curr != NULL)
	{
		temp = curr->link;
		free(curr);
		curr = temp;
	}
	/* for문일 경우
	for (curr = head -> link; curr != NULL; )
	{
		temp = curr->link;
		free(curr);
		curr = temp;
	}
	*/
	return 0;
}