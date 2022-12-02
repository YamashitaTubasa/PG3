#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
	int val;
	struct cell *next;
}CELL;

void create(CELL *endCell, int val); // �Z����V�K�쐬����֐�
void index(CELL *endCell); // �Z���̈ꗗ��\������֐�

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

void create(CELL *endCell, int val) {
	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	newCell->val = val;
	newCell->next = nullptr;

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
	}

	endCell->next = newCell;
}

void index(CELL *endCell) {
	printf("���͂��ꂽ�l�ꗗ : [");

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
		printf("%d, ", endCell->val);

	}

	printf("]\n\n\n");
}
