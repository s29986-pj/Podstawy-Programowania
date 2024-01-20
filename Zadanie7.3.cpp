#include <iostream>


int main() {
	double promien, wynik;
	
	std::cout << "Podaj dlugosc promienia, oblicze pole kola: ";
	std::cin >> promien;

	wynik = 3.14159 * pow(promien, 2);
	std::cout << "Pole kola wynosi: " << wynik << std::endl;

	double tab[10][10];
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++){
			if (i == 0 && j == 0) {
				tab[i][j] = wynik;
			}
			else {
				wynik += 3;
				tab[i][j] = wynik;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << tab[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}