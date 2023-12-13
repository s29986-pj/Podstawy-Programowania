#include <iostream>
using namespace std;

//funckja zamieniajaca elementy tablicy
void zamiana(int tab[], int size) {
	int temp, i=0;
	while(i < size - 1){ //petla wykonuje sie dopoki poruszamy sie po zakresie tablicy
		//zamiana elementow (biezacy z nastepnym)
		temp = tab[i];
		tab[i] = tab[i + 1];
		tab[i + 1] = temp;
		i += 2; //skok o 2 pomija zamienione elementy
	}
}

int main() {

	int n;

	//pytanie uzytkownika o rozmiar tablicy
	cout << "Podaj rozmiar tablicy: ";
	cin >> n;	
	
	//inicjalizacja tablicy
	int* liczby = new int[n]; 

	//wprowadzanie danych do tablicy przez uzytkownika
	cout << "Podaj elementy tablicy:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> liczby[i];
	}

	//wypisanie elementow tablicy przed zamiana
	cout << "\nTablica przed zamiana:" << endl << endl;
	for (int i = 0; i < n ; i++) {
		cout << liczby[i] << "\t";
		if (i % 2 != 0) cout << endl;
	}

	//zamiana elementow
	zamiana(liczby, n);

	//wypisanie elementow tablicy po zamianie
	cout << endl << endl << "Tablica po zamianie: " << endl << endl;
	for (int i = 0; i < n; i++) {
		cout << liczby[i] << "\t";
		if (i % 2 != 0) cout << endl;
	}
	cout << endl;

	return 0;
}

// Napisz program, który umożliwia :
// a) wczytanie aktualnego rozmiaru tablicy liczb całkowitych;
// b) wczytanie elementów tablicy liczb całkowitych;
// c) zamianę miejscami elementów tablicy, lezących po przeciwnej stronie prostej pionowej,
// dzielącej tablicę na dwie równe części.
