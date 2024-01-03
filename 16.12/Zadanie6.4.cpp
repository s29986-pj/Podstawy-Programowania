#include <iostream>
#include <string>
using namespace std;


int main()
{
	int ilosc;
	string wyrazenie, ciag;

	cout << "Podaj stringa: ";
	getline(cin, wyrazenie); //pozwala odczytać całą linię ze spacjami włącznie
	cout << "Podaj ilosc konkatenacji: ";
	cin >> ilosc;

	for (int i = 0; i <= ilosc; i++) {
		ciag += wyrazenie;
	}

	cout << "Wynik konkatenacji:" << endl << endl;
	cout << ciag << endl;

	return 0;
}

//Napisz program, który będzie dokonywał konkatenacji
//podanego przez użytkownika stringa n razy.Liczbę n także
//należy pobrać od użytkownika.