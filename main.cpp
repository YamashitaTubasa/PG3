#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <list>

int main(void) {

	// 山手線駅名 
	std::list<const char*> yamanoteLine = { 
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabara",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi"
	};
	

	// 山手線1970年の駅名
	printf("-----1970年-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	// 西日暮里駅を挿入
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabara") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	// 山手線2019年の駅名
	printf("\n-----2019年-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	// 高輪ゲートウェイ駅を挿入
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	// 山手線2022年の駅名
	printf("\n-----2022年-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {

		std::cout << *itr << "\n";
	}

	system("Pause");

	return 0;
}

