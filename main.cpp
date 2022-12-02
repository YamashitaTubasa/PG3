#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{
	char str[8];
	struct cell *next;
}CELL;

void create(CELL *endCell, const char *buf); // ƒZƒ‹‚ðV‹Kì¬‚·‚éŠÖ”
void index(CELL *endCell); // ƒZƒ‹‚Ìˆê——‚ð•\Ž¦‚·‚éŠÖ”

int main(void) {

	int num;
	char str[8];
	
	CELL head;
	head.next = nullptr;

	printf("[—v‘f‚Ì‘€ì]\n1.—v‘f‚Ìˆê——•\Ž¦\n2.ÅŒã”ö‚É—v‘f‚Ì‘}“ü\n3.ÅŒã”ö‚Ì—v‘f‚Ìíœ\n\n");
	printf("--------------------------------\n‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n");

	while (true) {
		scanf_s("%d", &num);
		printf("\n");

		if (num == 2) {
			printf("[ƒŠƒXƒg—v‘f‚Ì‘}“ü]\n\n’Ç‰Á‚·‚é—v‘f‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n“ü—Í‚·‚é’l : ");
			scanf_s("%s", str, 8);
			printf("\n—v‘f[%s]‚ªƒŠƒXƒg‚ÌÅŒã”ö‚É‘}“ü‚³‚ê‚Ü‚µ‚½\n\n", str);
			printf("----------------------------------------\n0.‰Šú‰æ–Ê‚É–ß‚é\n");
		}

		create(&head, str);

		if (num == 1) {
			index(&head);
		}

		if (num == 0) {
			printf("[—v‘f‚Ì‘€ì]\n1.—v‘f‚Ìˆê——•\Ž¦\n2.ÅŒã”ö‚É—v‘f‚Ì‘}“ü\n3.ÅŒã”ö‚Ì—v‘f‚Ìíœ\n\n");
			printf("--------------------------------\n‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n");
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
	printf("[—v‘f‚Ìˆê——]\n—v‘fˆê——:{\n");

	while (endCell->next != nullptr) 
	{
		endCell = endCell->next;
		printf("%s,\n", endCell->str);
	}

	printf("}\n\n\n");
}
