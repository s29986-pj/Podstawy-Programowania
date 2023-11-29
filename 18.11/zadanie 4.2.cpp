#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Podaj ilosc elementow: ";
	cin >> n;

	cout << "Podaj liczby:" << endl;

	int* tab = new int[n];
;

	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}

	int ilew = 0, szukana;
	for (int i = 0; i < n; i++) {
		int liczba = tab[i], licznik = 0;
		for (int j = 0; j < n; j++) {
			if (tab[j] == liczba) licznik++;
		}
		if (licznik > ilew) {
			ilew = licznik;
			szukana = liczba;
		}
	}

	cout << "Najczesciej wystepujaca wartosc: " << szukana << endl;
	cout << "Ilosc wystapien: " << ilew << endl;

	


	return 0;
}

//Napisz program, który wskazuje najczęściej występujący element
//w tablicy liczb całkowitych.Liczbę elementów tablicy i ich wartości
//pobierz od użytkownika.