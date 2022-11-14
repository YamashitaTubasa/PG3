#include <stdio.h>

// ��ʓI�Ȓ����̌n�̌v�Z
int GeneralWage(int general,int t) {
	return general * t;
}

// �ċA�I�Ȓ����̌n�̌v�Z
int RecursiveWage(int recursive,int n) {
	if (n == 1) {
		return recursive;
	}
	return (RecursiveWage(recursive,n - 1) * 2 - 50);
}

int main() {
	int general = 1072;      // ��ʓI�Ȓ����̌n
	int recursive = 100;     // �ċA�I�Ȓ����̌n
	int recursiveTotal = 0;  // �ċA�I�Ȓ����̌n�̍��v
	const int time = 15;     // ����

	for (int i = 1; i < time; i++) {
		recursiveTotal += RecursiveWage(recursive,i);
		printf("��ʓI�Ȓ����̌n[%d���� - %d�~]\n", i, GeneralWage(general,i));
		printf("�ċA�I�Ȓ����̌n[%d���� - %d�~]\n\n", i, recursiveTotal);
	}

	return 0;
}