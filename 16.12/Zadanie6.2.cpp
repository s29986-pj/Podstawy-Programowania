#include <iostream>
#include <string>
using namespace std;

struct uczniowie {
	string imie;
	int informatyka;
	int matematyka;
	int biologia;
	int j_polski;
};


int main()
{
	struct uczniowie lista[6];

	//Wprowadzanie danych do listy
	cout << "Wprowadz dane szesciu uczniow." << endl << endl;
	for (int i = 0; i < 6; i++) {
		cout << "Uczen nr " << i + 1 << endl;
		cout << "Podaj imie: ";
		cin >> lista[i].imie;
		cout << "Podaj ocene z informatyki: ";
		cin >> lista[i].informatyka;
		cout << "Podaj ocene z matematyki: ";
		cin >> lista[i].matematyka;
		cout << "Podaj ocene z biologii: ";
		cin >> lista[i].biologia;
		cout << "Podaj ocene z jezyka polskiego: ";
		cin >> lista[i].j_polski;
		cout << endl;
	}

	//Ile pytan
	int il_pytan;
	cout << "Podaj ilosc pytan: ";
	cin >> il_pytan;

	//Pytania + odpowiedz
	int n_ucznia, n_przed;
	for (int i = 0; i < il_pytan; i++) {
		cout << "Podaj numer ucznia [1..6]: ";
		cin >> n_ucznia;
		if (n_ucznia >= 1 && n_ucznia <= 6) { //jesli liczba jest spoza zakresu, pytanie sie przerywa
			cout << "Podaj numer przedmiotu [1..4]: ";
			cin >> n_przed;
			switch (n_przed) {
			case 1:
				cout << "Uczen: " << lista[n_ucznia - 1].imie
					<< ", ocena z informatyki: " << lista[n_ucznia - 1].informatyka << endl;
				break;
			case 2:
				cout << "Uczen: " << lista[n_ucznia - 1].imie
					<< ", ocena z matematyki: " << lista[n_ucznia - 1].matematyka << endl;
				break;
			case 3:
				cout << "Uczen: " << lista[n_ucznia - 1].imie
					<< ", ocena z biologii: " << lista[n_ucznia - 1].biologia << endl;
				break;
			case 4:
				cout << "Uczen: " << lista[n_ucznia - 1].imie
					<< ", ocena z jezyka polskiego: " << lista[n_ucznia - 1].j_polski << endl;
				break;
			default:
				cout << "Podano zly numer!" << endl;
				break;
			}
		}
		else cout << "Podano zly numer!" << endl;
	}

	return 0;
}

//Napisz program, który będzie symulował grupę 6 uczniów z kilku
//równoległych klas i ich wyniki w nauce z czterech przedmiotów.Program
//powinien wczytać sześciu uczniów o następujących właściwościach :
//• imię ucznia;
//• oceny z informatyki, matematyki, biologii i języka polskiego,
//a potem odpowiadał na pytania o ocenę z danego przedmiotu, gdzie
//najpierw pobiera od użytkownika numer ucznia, a następnie – numer
//przedmiotu.