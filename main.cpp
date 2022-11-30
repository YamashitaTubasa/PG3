#include <stdio.h>
#include <stdlib.h>

typedef struct CELL{
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
		scanf_s("%d", &val);

		create(&head, val);

		index(&head);
	}

	return 0;
}

void create(CELL *head, int val) {
	CELL* next;

	head = (CELL*)malloc(sizeof(CELL));

	next->val = val;
	head->next = nullptr;

	while (head->next != nullptr) {
		head = head->next;
	}

	head->next = head;
}

void index(CELL *head) {

	while () {
		printf("%d\n", head->val);
	}

}
