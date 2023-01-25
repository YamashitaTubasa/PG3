#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <iostream>
#include <functional>

class SceneManager final
{
private:
	SceneManager() = default;
	~SceneManager() = default;

public:
	// コピーコンストラクタを無効にする
	SceneManager(const SceneManager& obj) = delete;

	// 代入演算子を無効にする
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);

};

