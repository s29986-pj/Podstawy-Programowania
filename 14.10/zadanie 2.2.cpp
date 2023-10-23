#include <iostream>
using namespace std;

int a, b;

int main() {

	cout << "Podaj dlugosc boku a: ";
	cin >> a;
	cout << "Podaj dlugosc boku b: ";
	cin >> b;

	cout << "Wiersz o dlugosci 'a':" << endl;
	for (int i = 0; i < a; i++) {
		cout << "*";
	}

	cout << "\n\nKolumna o dlugosci 'b':" << endl;
	for (int i = 0; i < b; i++) {
		cout << "*" << endl;
	}

	cout << "\nProstokat o wymiarach 'a' na 'b':" << endl;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nObwod o wymiarach 'a' na 'b':" << endl;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= a; j++) {
			if (i == 1 || i == b) {
				cout << "*";
			}
			else {
				if (j == 1 || j == a) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			
		}
		cout << endl;
	}

	cout << "\nTrojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nTrojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu" << endl;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <=a ; j++) {
			if (i == 1) {
				cout << "*";
			}
			else {
				if (j < i) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
		}
		cout << endl;
	}



	return 0;
}
