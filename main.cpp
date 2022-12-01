#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
	int val;
	struct cell *next;
}CELL;

void create(CELL *head, int val); // �Z����V�K�쐬����֐�
void index(CELL *head); // �Z���̈ꗗ��\������֐�

int main(void) {
	int val;
	
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("�D���Ȑ�������͂��Ă�������\n���͂���l : ");
		scanf_s("%d", &val);
		printf("\n");

		create(&head, val);

		index(&head);
	}

	return 0;
}

void create(CELL *head, int val) {
	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	newCell->val = val;
	newCell->next = nullptr;

	while (head->next != nullptr) 
	{
		head = head->next;
	}

	head->next = newCell;
}

void index(CELL *head) {
	printf("���͂��ꂽ�l�ꗗ : [");

	while (head->next != nullptr) 
	{
		head = head->next;
		printf("%d, ", head->val);

	}

	printf("]\n\n\n");
}
