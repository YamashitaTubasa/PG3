#include <iostream>
#include <windows.h>
#include "Enemy.h"

using namespace std;

int Enemy::enemyCount;

int main(void) {
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	cout << Enemy::enemyCount << endl;
	cout << Enemy::enemyCount << endl;
	cout << Enemy::enemyCount << endl;

	Sleep(1 * 1000);

	delete enemy1;

	cout << Enemy::enemyCount << endl;

	Sleep(0.5 * 1000);

	delete enemy2;
	delete enemy3;
	cout << Enemy::enemyCount << endl;
	cout << Enemy::enemyCount << endl;

	return 0;
}