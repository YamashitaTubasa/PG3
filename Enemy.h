#pragma once

#include <iostream>
#include <windows.h>
#include <stdio.h>

//============
// �G�N���X
//============
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Update();
	void Proximity();
	void Shooting();
	void Elimination();

private:
	// �t�F�[�Y�̊֐��e�[�u��
	static void(Enemy::*spFuncTable[])();

	int phase_ = 0;
};

