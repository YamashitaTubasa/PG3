#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{
	char str[8];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char *buf); // �Z����V�K�쐬����֐�
void index(CELL *endCell); // �Z���̈ꗗ��\������֐�

int main(void) {

	int num;
	char str[8];
	
	CELL head;
	head.next = nullptr;

	printf("[�v�f�̑���]\n1.�v�f�̈ꗗ�\��\n2.�Ō���ɗv�f�̑}��\n3.�Ō���̗v�f�̍폜\n\n");
	printf("--------------------------------\n�����I�����Ă�������\n");

	while (true) {
		scanf_s("%d", &num);
		printf("\n");

		if (num == 2) {
			printf("[���X�g�v�f�̑}��]\n\n�ǉ�����v�f�̒l����͂��Ă�������\n���͂���l : ");
			scanf_s("%s", str, 8);
			printf("\n�v�f[%s]�����X�g�̍Ō���ɑ}������܂���\n\n", str);
			printf("----------------------------------------\n0.������ʂɖ߂�\n");
		}

		create(&head, str);

		if (num == 1) {
			index(&head);
		}

		if (num == 0) {
			printf("[�v�f�̑���]\n1.�v�f�̈ꗗ�\��\n2.�Ō���ɗv�f�̑}��\n3.�Ō���̗v�f�̍폜\n\n");
			printf("--------------------------------\n�����I�����Ă�������\n");
		}
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
	printf("[�v�f�̈ꗗ]\n�v�f�ꗗ:{\n");

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
		printf("%s,\n", endCell->str);
	}

	printf("}\n\n\n");
}
