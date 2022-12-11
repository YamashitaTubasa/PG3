#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <list>

int main(void) {

	// �R����w�� 
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
	

	// �R���1970�N�̉w��
	printf("-----1970�N-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	// �����闢�w��}��
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabara") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	// �R���2019�N�̉w��
	printf("\n-----2019�N-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	// ���փQ�[�g�E�F�C�w��}��
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	// �R���2022�N�̉w��
	printf("\n-----2022�N-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {

		std::cout << *itr << "\n";
	}

	system("Pause");

	return 0;
}

