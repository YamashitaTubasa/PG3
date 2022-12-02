#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{
	char str[8];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char *buf); // セルを新規作成する関数
void index(CELL *endCell); // セルの一覧を表示する関数

int main(void) {

	int num;
	char str[8];
	
	CELL head;
	head.next = nullptr;

	printf("[要素の操作]\n1.要素の一覧表示\n2.最後尾に要素の挿入\n3.最後尾の要素の削除\n\n");
	printf("--------------------------------\n操作を選択してください\n");

	while (true) {
		scanf_s("%d", &num);
		printf("\n");

		if (num == 2) {
			printf("[リスト要素の挿入]\n\n追加する要素の値を入力してください\n入力する値 : ");
			scanf_s("%s", str, 8);
			printf("\n要素[%s]がリストの最後尾に挿入されました\n\n", str);
			printf("----------------------------------------\n0.初期画面に戻る\n");
		}

		create(&head, str);

		if (num == 1) {
			index(&head);
		}

		if (num == 0) {
			printf("[要素の操作]\n1.要素の一覧表示\n2.最後尾に要素の挿入\n3.最後尾の要素の削除\n\n");
			printf("--------------------------------\n操作を選択してください\n");
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
	printf("[要素の一覧]\n要素一覧:{\n");

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
		printf("%s,\n", endCell->str);
	}

	printf("}\n\n\n");
}
