#include <iostream>
using namespace std;

int main() {

	char z;

	cout << "Podaj znak, program nie zakonczy sie, dopoki nie podasz litery 't': " << endl;

	do {
		cin >> z;	
	} while (z != 't');


	return 0;
}