#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <iostream>
#include <functional>

int main(void) {

	int number = 0;   // �ԍ�
	int waitTime = 3; // �������o��܂ő҂��̎���

	srand(time(nullptr));
	int dice = rand() % 6 + 1;

	// �T�C�R���̒��I�֐�
	std::function<void()> diceDrawing = [=]() {
		if (dice % 2 == number) {
			printf("�A�^��\n");
		}
		else {
			printf("�n�Y��\n");
		}
	};

	// �҂����Ԃ̊֐�
	std::function<void(std::function<void()>, int)> SetTimeout = [](std::function<void()> fx, int waitTime) { 
		Sleep(waitTime * 1000); fx(); 
	};
	
	printf("��(�)���Ǝv������ [ 1 ] �A ��(����)���Ǝv������ [ 0 ]����͂��Ă�������\n��\n");
	
	scanf_s("[ %d ]", &number); // �v���C���[�����������̓��͎�t

	SetTimeout(diceDrawing, waitTime);

	return 0;

}

