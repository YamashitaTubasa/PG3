#include "SceneManager.h"

SceneManager* SceneManager::GetInstance() {
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene(int sceneNo) {
	while (true) {
		switch (sceneNo) {
			case 0:
				Sleep(1 * 1000);
				printf("Titleシーン\n");
				if (sceneNo == 0) {
					sceneNo = 1;
				}
				break;
			case 1:
				Sleep(1 * 1000);
				printf("NewGameシーン\n");
				if (sceneNo == 1) {
					sceneNo = 2;
				}
				break;
			case 2:
				Sleep(1 * 1000);
				printf("GamePlayシーン\n");
				if (sceneNo == 2) {
					sceneNo = 3;
				}
				break;
			case 3:
				Sleep(1 * 1000);
				printf("GameClearシーン\n");
				if (sceneNo == 3) {
					sceneNo = 0;
				}
				break;
		}
	}
}
