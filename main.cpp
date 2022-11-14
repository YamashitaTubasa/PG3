#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <iostream>
#include <functional>

int main(void) {

	int number = 0;   // 番号
	int waitTime = 3; // 答えが出るまで待ちの時間

	srand(time(nullptr));
	int dice = rand() % 6 + 1;

	// サイコロの抽選関数
	std::function<void()> diceDrawing = [=]() {
		if (dice % 2 == number) {
			printf("アタリ\n");
		}
		else {
			printf("ハズレ\n");
		}
	};

	// 待ち時間の関数
	std::function<void(std::function<void()>, int)> SetTimeout = [](std::function<void()> fx, int waitTime) { 
		Sleep(waitTime * 1000); fx(); 
	};
	
	printf("半(奇数)だと思ったら [ 1 ] 、 丁(偶数)だと思ったら [ 0 ]を入力してください\n↓\n");
	
	scanf_s("[ %d ]", &number); // プレイヤーから奇数か偶数の入力受付

	SetTimeout(diceDrawing, waitTime);

	return 0;

}

