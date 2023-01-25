#include "Enemy.h"

Enemy::Enemy() {}

Enemy::~Enemy() {}

void Enemy::Update()
{	
	for (phase_ = 0; phase_ < 3; phase_++) {
		// �����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
	}
}

void Enemy::Proximity()
{
	Sleep(1 * 1000);
	printf("�ߐ�\n");
}

void Enemy::Shooting() 
{
	Sleep(1 * 1000);
	printf("�ˌ�\n");
}

void Enemy::Elimination() 
{
	Sleep(1 * 1000);
	printf("���E\n");
}

void (Enemy::* Enemy::spFuncTable[])() 
= {
	&Enemy::Proximity,  // �ߐ�0
	&Enemy::Shooting,   // �ˌ�1
	&Enemy::Elimination // ���E2
};
