#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
	int val;
	struct cell *prev;
	struct cell *next;
}CELL;

void create(CELL *currentCell, int val); // セルを新規作成する関数
void index(CELL *endCell); // セルの一覧を表示する関数
CELL* getInsertCellAddress(CELL *endCELL, int iterator);

int main(void) {
	int iterator;
	int inputValue;
	int val = 0;
	CELL *insertCell;
	
	CELL head;
	head.next = nullptr;
	head.prev = nullptr;

	while (true) {
		printf("何番目のセルの後ろに挿入しますか？\n");
		scanf_s("%d", &iterator);

		printf("挿入する値を入力してください\n");
		scanf_s("%d", &inputValue);

		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, val);

		index(&head);
	}

	return 0;
}

void create(CELL *currentCell, int val) {
	CELL *newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	if (currentCell->next) {
		CELL *nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	currentCell->next = newCell;
}

void index(CELL *endCell) {
	int no = 1;
	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d ", no);
		printf("%p ", endCell->prev);
		printf("%5d ", endCell->val);
		printf("(%p) ", endCell);
		printf("%p\n", endCell->next);
	}

}

CELL* getInsertCellAddress(CELL* endCELL, int iterator) {
	for (int i = 0; i < iterator; i++) {
		if (endCELL->next) {
			endCELL = endCELL->next;
		}
		else {
			break;
		}
	}
	return endCELL;
}
