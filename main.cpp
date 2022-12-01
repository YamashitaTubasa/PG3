#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
	int val;
	struct cell *next;
}CELL;

void create(CELL *head, int val); // セルを新規作成する関数
void index(CELL *head); // セルの一覧を表示する関数

int main(void) {
	int val;
	
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("好きな数字を入力してください\n入力する値 : ");
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
	printf("入力された値一覧 : [");

	while (head->next != nullptr) 
	{
		head = head->next;
		printf("%d, ", head->val);

	}

	printf("]\n\n\n");
}
