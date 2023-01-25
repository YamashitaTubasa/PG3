#include "Enemy.h"

using namespace std;

int main(void) {
	Enemy* enemy1 = new Enemy;
	
	while (true) {
		enemy1->Update();
	}

	delete enemy1;

	return 0;
}