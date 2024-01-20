#include <iostream>


struct osoby {
	char imie[50];
	char nazwisko[50];
};

int main() {
	struct osoby osoby[3];

	for (int i = 0; i < 3; i++) {
		std::cout << "Podaj imie osoby " << i + 1 << ": ";
		std::cin >> osoby[i].imie;
		std::cout << "Podaj nazwisko osoby " << i + 1 << ": ";
		std::cin >> osoby[i].nazwisko;
	}

	const char* dane[100][100];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				dane[i][j] = osoby[i].imie;
			}
			else {
				dane[i][j] = osoby[i].nazwisko;
			}
		}
	}

	std::cout << "\nImiona i nazwiska trzech osob:" << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				std::cout << "Osoba nr " << i + 1 << ": " << dane[i][j];
			}
			else {
				std::cout << " " << dane[i][j];
			}
		}
		std::cout << std::endl;
	}


	return 0;
}