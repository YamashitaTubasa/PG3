#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{   
	char str[10];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char *buf); // セルを新規作成する関数
void index(CELL *endCell); // セルの一覧を表示する関数
void deleteElement(CELL* endCell); // 最後の要素を削除する関数

int main(void) {

	int selectionNum; // 選択番号
	char str[10];
	
	CELL head;
	head.next = nullptr;

	printf("[要素の操作]\n");
	printf("1.要素の一覧表示\n");
	printf("2.最後尾に要素の挿入\n");
	printf("3.最後尾の要素の削除\n\n");
	printf("--------------------------------\n");
	printf("操作を選択してください\n");

	while (true) {
		scanf_s("%d", &selectionNum);
		printf("\n");

		if (selectionNum == 0) {
			printf("[要素の操作]\n");
			printf("1.要素の一覧表示\n");
			printf("2.最後尾に要素の挿入\n");
			printf("3.最後尾の要素の削除\n\n");
			printf("--------------------------------\n");
			printf("操作を選択してください\n");
		}

		if (selectionNum == 2) {
			printf("[リスト要素の挿入]\n\n");
			printf("追加する要素の値を入力してください\n");
			printf("入力する値 : ");
			scanf_s("%s", str, 10);
			printf("\n要素[ %s ]がリストの最後尾に挿入されました\n\n", str);
			printf("--------------------------------\n");
			printf("0.初期画面に戻る\n");
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
	int elementNum = -1; // 要素番号
	printf("[要素の一覧]\n");
	printf("要素一覧:{\n");

	while (endCell->next != nullptr) 
	{
		elementNum++;
		endCell = endCell->next;
		printf("%d: %s,\n", elementNum, endCell->str);
	}

	printf("}\n\n\n");
	printf("要素数: %d\n", elementNum + 1);
	printf("---------------------------------\n");
	printf("0.初期画面に戻る\n");
}

void deleteElement(CELL* endCell)
{
	CELL *prevCell;
	prevCell = endCell->next;

	printf("[要素の削除]\n");
	printf("最後尾の要素を削除しました\n\n\n");
	printf("---------------------------------\n");
	printf("0.初期画面に戻る\n");
	
	if (prevCell->next != nullptr) {
		prevCell->next = nullptr;
	}
}
