#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{
	char str[8];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char buf); // �Z����V�K�쐬����֐�
void index(CELL *endCell); // �Z���̈ꗗ��\������֐�

int main(void) {

	char str[8];
	
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("�D���Ȑ�������͂��Ă�������\n���͂���l : ");
		scanf_s("%s", str, 8);
		printf("\n");

		create(&head, str);

		index(&head);
	}

	return 0;
}

void create(CELL *endCell, const char *buf) {
	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 8, buf);
	//newCell->str = buf;
	newCell->next = nullptr;

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
	}

	endCell = newCell;
}

void index(CELL *endCell) {
	printf("���͂��ꂽ�l�ꗗ : [");

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
		printf("%d, ", endCell->str);

	}

	printf("]\n\n\n");
}
