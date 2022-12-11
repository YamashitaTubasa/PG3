#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <list>

int main(void) {

	// Rèü‰w–¼ 
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
	

	// Rèü1970”N‚Ì‰w–¼
	printf("-----1970”N-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	// ¼“ú•é—¢‰w‚ğ‘}“ü
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabara") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	// Rèü2019”N‚Ì‰w–¼
	printf("\n-----2019”N-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	// ‚—ÖƒQ[ƒgƒEƒFƒC‰w‚ğ‘}“ü
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	// Rèü2022”N‚Ì‰w–¼
	printf("\n-----2022”N-----\n");
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {

		std::cout << *itr << "\n";
	}

	system("Pause");

	return 0;
}

