#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{   
	char str[10];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char *buf); // ƒZƒ‹‚ðV‹Kì¬‚·‚éŠÖ”
void index(CELL *endCell); // ƒZƒ‹‚Ìˆê——‚ð•\Ž¦‚·‚éŠÖ”
void deleteElement(CELL* endCell); // ÅŒã‚Ì—v‘f‚ðíœ‚·‚éŠÖ”

int main(void) {

	int selectionNum; // ‘I‘ð”Ô†
	char str[10];
	
	CELL head;
	head.next = nullptr;

	printf("[—v‘f‚Ì‘€ì]\n");
	printf("1.—v‘f‚Ìˆê——•\Ž¦\n");
	printf("2.ÅŒã”ö‚É—v‘f‚Ì‘}“ü\n");
	printf("3.ÅŒã”ö‚Ì—v‘f‚Ìíœ\n\n");
	printf("--------------------------------\n");
	printf("‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n");

	while (true) {
		scanf_s("%d", &selectionNum);
		printf("\n");

		if (selectionNum == 0) {
			printf("[—v‘f‚Ì‘€ì]\n");
			printf("1.—v‘f‚Ìˆê——•\Ž¦\n");
			printf("2.ÅŒã”ö‚É—v‘f‚Ì‘}“ü\n");
			printf("3.ÅŒã”ö‚Ì—v‘f‚Ìíœ\n\n");
			printf("--------------------------------\n");
			printf("‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n");
		}

		if (selectionNum == 2) {
			printf("[ƒŠƒXƒg—v‘f‚Ì‘}“ü]\n\n");
			printf("’Ç‰Á‚·‚é—v‘f‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
			printf("“ü—Í‚·‚é’l : ");
			scanf_s("%s", str, 10);
			printf("\n—v‘f[ %s ]‚ªƒŠƒXƒg‚ÌÅŒã”ö‚É‘}“ü‚³‚ê‚Ü‚µ‚½\n\n", str);
			printf("--------------------------------\n");
			printf("0.‰Šú‰æ–Ê‚É–ß‚é\n");
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
	int elementNum = -1; // —v‘f”Ô†
	printf("[—v‘f‚Ìˆê——]\n");
	printf("—v‘fˆê——:{\n");

	while (endCell->next != nullptr) 
	{
		elementNum++;
		endCell = endCell->next;
		printf("%d: %s,\n", elementNum, endCell->str);
	}

	printf("}\n\n\n");
	printf("—v‘f”: %d\n", elementNum + 1);
	printf("---------------------------------\n");
	printf("0.‰Šú‰æ–Ê‚É–ß‚é\n");
}

void deleteElement(CELL* endCell)
{
	CELL *prevCell;
	prevCell = endCell->next;

	printf("[—v‘f‚Ìíœ]\n");
	printf("ÅŒã”ö‚Ì—v‘f‚ðíœ‚µ‚Ü‚µ‚½\n\n\n");
	printf("---------------------------------\n");
	printf("0.‰Šú‰æ–Ê‚É–ß‚é\n");
	
	if (prevCell->next != nullptr) {
		prevCell->next = nullptr;
	}
}
