#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
	int val;
	struct cell *next;
}CELL;

void create(CELL *endCell, int val); // セルを新規作成する関数
void index(CELL *endCell); // セルの一覧を表示する関数

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
	printf("入力された値一覧 : [");

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
		printf("%d, ", endCell->val);

	}

	printf("]\n\n\n");
}
