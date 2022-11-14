#include <stdio.h>

// ˆê”Ê“I‚È’À‹à‘ÌŒn‚ÌŒvZ
int GeneralWage(int general,int t) {
	return general * t;
}

// Ä‹A“I‚È’À‹à‘ÌŒn‚ÌŒvZ
int RecursiveWage(int recursive,int n) {
	if (n == 1) {
		return recursive;
	}
	return (RecursiveWage(recursive,n - 1) * 2 - 50);
}

int main() {
	int general = 1072;      // ˆê”Ê“I‚È’À‹à‘ÌŒn
	int recursive = 100;     // Ä‹A“I‚È’À‹à‘ÌŒn
	int recursiveTotal = 0;  // Ä‹A“I‚È’À‹à‘ÌŒn‚Ì‡Œv
	const int time = 15;     // ŠÔ

	for (int i = 1; i < time; i++) {
		recursiveTotal += RecursiveWage(recursive,i);
		printf("ˆê”Ê“I‚È’À‹à‘ÌŒn[%dŠÔ - %d‰~]\n", i, GeneralWage(general,i));
		printf("Ä‹A“I‚È’À‹à‘ÌŒn[%dŠÔ - %d‰~]\n\n", i, recursiveTotal);
	}

	return 0;
}