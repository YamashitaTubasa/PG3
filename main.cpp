#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

typedef void(*PFunc)(int*);

void DiceResult(int* n) {
	srand(time(nullptr));
	int dice = rand() % 5 + 1;

	if (dice % 2 == *n) {
		printf("�A�^��\n");
	}
	else {
		printf("�n�Y��\n");
	}

	printf("�T�C�R���̌��� �� %d\n", dice);
}

void SetTimeout(PFunc p, int secound, int number) {
	Sleep(secound);
	p(&number);
}

int main(void) {
	PFunc p;

	int number = 0;     // �ԍ�
	int secound = 3000; // �b��

	printf("��(�)���Ǝv������ [ 1 ] �A ��(����)���Ǝv������ [ 0 ]����͂��Ă�������\n��\n");
	scanf_s("[ %d ]", &number);

	p = DiceResult;
	SetTimeout(p, secound, number);

	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <time.h>
//
//typedef void (*PFunc)(int*);
//
//void diceResult(int* num) {
//
//    srand(time(nullptr));
//    int dice = rand() % 5 + 1;
//
//    if (dice % 2 == *num) {
//        printf("������\n");
//    }
//    else {
//        printf("�͂���\n");
//    }
//
//    printf("��������̏o�ڂ�%d�ł���\n", dice);
//
//}
//
//void setTimeout(PFunc p, int second, int num) {
//
//    //�R�[���o�b�N�֐����Ăяo��
//    Sleep(second);
//
//    //mac��Unix�nOS�̏ꍇ
//    //sleep(second);
//    p(&num);
//
//}
//
//int main(void) {
//
//    PFunc p;
//
//    int number = 0;
//    int second = 3000;
//
//    printf("��(�)�Ȃ�[1],��(����)�Ȃ�[0]����͂��Ă�������\n");
//    scanf_s("%d\n", &number);
//
//    p = diceResult;
//
//    setTimeout(p, second, number);
//
//    return 0;
//
//}
