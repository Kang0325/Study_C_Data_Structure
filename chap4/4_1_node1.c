#include <stdio.h>

typedef struct node
{
	int data;				// data ���
	struct node* link;		// ���� ����� �ּҸ� ������ ���
} Node;

int main()
{
	int i = 1;
	Node* head = (Node*)malloc(sizeof(Node));

	Node* node1 = malloc(sizeof(Node));		// ��� ����
	Node* node2 = malloc(sizeof(Node));
	Node* node3 = malloc(sizeof(Node));
	Node* node4 = malloc(sizeof(Node));
	Node* node5 = malloc(sizeof(Node));

	if (node1 == NULL) return;
	head->link = node1;		// ��� ��忡 ù ��° ����� �ּҰ��� �ִ´�
	
	node1->data = 10;
	node1->link = node2;
	node2->data = 20;
	node2->link = node3;
	node3->data = 30;
	node3->link = node4;
	node4->data = 40;
	node4->link = node5;
	node5->data = 50;
	node5->link = NULL;

	Node* curr = head->link;
	while (curr != NULL)
	{
		printf("%d��° ��� ������ : %d\n", i, curr->data);
		curr = curr->link;
		i++;
	}

	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
	free(head);

	return 0;
}

