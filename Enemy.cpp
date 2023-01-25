#include "Enemy.h"

Enemy::Enemy() {}

Enemy::~Enemy() {}

void Enemy::Update()
{	
	for (phase_ = 0; phase_ < 3; phase_++) {
		// メンバ関数ポインタに入っている関数を呼び出す
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
	}
}

void Enemy::Proximity()
{
	Sleep(1 * 1000);
	printf("近接\n");
}

void Enemy::Shooting() 
{
	Sleep(1 * 1000);
	printf("射撃\n");
}

void Enemy::Elimination() 
{
	Sleep(1 * 1000);
	printf("離脱\n");
}

void (Enemy::* Enemy::spFuncTable[])() 
= {
	&Enemy::Proximity,  // 近接0
	&Enemy::Shooting,   // 射撃1
	&Enemy::Elimination // 離脱2
};
