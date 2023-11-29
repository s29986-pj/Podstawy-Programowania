#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Podaj ilosc elementow: ";
	cin >> n;
	cout << "Podaj liczby:" << endl;

	int* tab = new int[n];
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> tab[i];
		if (tab[i] > max) max = tab[i];
	}

	cout << "Najwiekszy element: " << max << endl;

	return 0;
}

//Znajdź największy element danej tablicy liczb całkowitych.
//Liczbę elementów tablicy i ich wartości pobierz od użytkownika.
