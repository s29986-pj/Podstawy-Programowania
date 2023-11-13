#include <iostream>
using namespace std;

int main() {

	int wiersze;

	cout << "Program wypisze liczby z trojkata Pascala. Podaj ilosc wierszy: ";
	cin >> wiersze;

	
	for (int i = 0; i < wiersze; i++) {
// W trójkącie Pascala każdy wiersz zaczyna się od 1
		int liczba = 1;
		for (int j = 0; j <= i ; j++) {
			cout << liczba << " ";
// Wykorzystuję właściwość trójkąta Pascala: 
// Każda kolejna liczba w wierszu jest obliczana na podstawie poprzedniej liczby w tym samym wierszu.
			liczba = liczba * (i - j) / (j + 1);
		}
		cout << endl;
	}

	return 0;
}