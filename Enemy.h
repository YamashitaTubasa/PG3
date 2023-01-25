#pragma once

#include <iostream>
#include <windows.h>
#include <stdio.h>

//============
// 敵クラス
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
	// フェーズの関数テーブル
	static void(Enemy::*spFuncTable[])();

	int phase_ = 0;
};

