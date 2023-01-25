#include "SceneManager.h"

int main(void) {
	SceneManager* sceneManager = SceneManager::GetInstance();

	int sceneNo = 0;

	while (true) {
		sceneManager->ChangeScene(sceneNo);
	}

	return 0;
}