#include <iostream>

int silnia(int liczba) {
	return (liczba == 0) ? 1 : liczba * silnia(liczba - 1);
}


int main() {
	int liczba;

	std::cout << "Podaj liczbe: ";
	std::cin >> liczba;
	std::cout << "Silnia wynosi: " << silnia(liczba) << std::endl;
	
	std::cout << "\nWynik jest podzielny przez:" << std::endl;
	if (silnia(liczba) % 2 == 0)std::cout << 2 << std::endl;
	if (silnia(liczba) % 3 == 0)std::cout << 3 << std::endl;
	if (silnia(liczba) % 5 == 0)std::cout << 5 << std::endl;
	if (silnia(liczba) % 11 == 0)std::cout << 11 << std::endl;

	return 0;
}