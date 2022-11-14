#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

typedef void(*PFunc)(int*);

void DiceResult(int* n) {
	srand(time(nullptr));
	int dice = rand() % 5 + 1;

	if (dice % 2 == *n) {
		printf("アタリ\n");
	}
	else {
		printf("ハズレ\n");
	}

	printf("サイコロの結果 → %d\n", dice);
}

void SetTimeout(PFunc p, int secound, int number) {
	Sleep(secound);
	p(&number);
}

int main(void) {
	PFunc p;

	int number = 0;     // 番号
	int secound = 3000; // 秒数

	printf("半(奇数)だと思ったら [ 1 ] 、 丁(偶数)だと思ったら [ 0 ]を入力してください\n↓\n");
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
//        printf("当たり\n");
//    }
//    else {
//        printf("はずれ\n");
//    }
//
//    printf("さいころの出目は%dでした\n", dice);
//
//}
//
//void setTimeout(PFunc p, int second, int num) {
//
//    //コールバック関数を呼び出す
//    Sleep(second);
//
//    //macやUnix系OSの場合
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
//    printf("半(奇数)なら[1],丁(偶数)なら[0]を入力してください\n");
//    scanf_s("%d\n", &number);
//
//    p = diceResult;
//
//    setTimeout(p, second, number);
//
//    return 0;
//
//}
