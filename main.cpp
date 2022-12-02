#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{   
	char str[10];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char *buf); // �Z����V�K�쐬����֐�
void index(CELL *endCell); // �Z���̈ꗗ��\������֐�
void deleteElement(CELL* endCell); // �Ō�̗v�f���폜����֐�

int main(void) {

	int selectionNum; // �I��ԍ�
	char str[10];
	
	CELL head;
	head.next = nullptr;

	printf("[�v�f�̑���]\n");
	printf("1.�v�f�̈ꗗ�\��\n");
	printf("2.�Ō���ɗv�f�̑}��\n");
	printf("3.�Ō���̗v�f�̍폜\n\n");
	printf("--------------------------------\n");
	printf("�����I�����Ă�������\n");

	while (true) {
		scanf_s("%d", &selectionNum);
		printf("\n");

		if (selectionNum == 0) {
			printf("[�v�f�̑���]\n");
			printf("1.�v�f�̈ꗗ�\��\n");
			printf("2.�Ō���ɗv�f�̑}��\n");
			printf("3.�Ō���̗v�f�̍폜\n\n");
			printf("--------------------------------\n");
			printf("�����I�����Ă�������\n");
		}

		if (selectionNum == 2) {
			printf("[���X�g�v�f�̑}��]\n\n");
			printf("�ǉ�����v�f�̒l����͂��Ă�������\n");
			printf("���͂���l : ");
			scanf_s("%s", str, 10);
			printf("\n�v�f[ %s ]�����X�g�̍Ō���ɑ}������܂���\n\n", str);
			printf("--------------------------------\n");
			printf("0.������ʂɖ߂�\n");
			create(&head, str);
		}

		if (selectionNum == 1) {
			index(&head);
		}


		if (selectionNum == 3) {
			deleteElement(&head);
		}
	}

	return 0;
}

void create(CELL *endCell, const char *buf) {
	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));
	
	strcpy_s(newCell->str, 10, buf);
	
	newCell->next = nullptr;

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
	}

	endCell->next = newCell;
}

void index(CELL *endCell) {
	int elementNum = -1; // �v�f�ԍ�
	printf("[�v�f�̈ꗗ]\n");
	printf("�v�f�ꗗ:{\n");

	while (endCell->next != nullptr) 
	{
		elementNum++;
		endCell = endCell->next;
		printf("%d: %s,\n", elementNum, endCell->str);
	}

	printf("}\n\n\n");
	printf("�v�f��: %d\n", elementNum + 1);
	printf("---------------------------------\n");
	printf("0.������ʂɖ߂�\n");
}

void deleteElement(CELL* endCell)
{
	CELL *prevCell;
	prevCell = endCell->next;

	printf("[�v�f�̍폜]\n");
	printf("�Ō���̗v�f���폜���܂���\n\n\n");
	printf("---------------------------------\n");
	printf("0.������ʂɖ߂�\n");
	
	if (prevCell->next != nullptr) {
		prevCell->next = nullptr;
	}
}
