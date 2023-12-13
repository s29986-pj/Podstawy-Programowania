#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> wektor;
	int n;

	cout << "Podaj ilosc elementow: ";
	cin >> n;

	int liczba, max = 0, indeks;
	for (int i = 0; i < n; i++) {
		cout << "Podaj liczbe: ";
		cin >> liczba;
		wektor.push_back(liczba);
		if (liczba > max) {
			max = liczba;
			indeks = i;
		}
	}

	cout << "Wartosc maksymalna wektora: " << max << endl;
	cout << "Numer indeksu wartosci maksymalnej: " << indeks << endl;


	return 0;
}

// Napisz program, w którym :
// a) użytkownik poda liczbę elementów wektora;
// b) pobrane zostaną od użytkownika wszystkie elementy wektora;
// c) wskazana zostanie wartość elementu maksymalnego wektora;
// d) Wskazany zostanie numer indeksu elementu maksymalnego.
