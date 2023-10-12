
#include <iostream>
using namespace std;

int liczba;

int main()
{
	cout << "Podaj liczbe calkowita: ";
	
	cin >> liczba;

	if (liczba > 0) {
		cout << "Liczba " << liczba << " jest dodatnia" << endl;
	}
	else {
		if (liczba < 0) {
			cout << "Liczba " << liczba << " jest ujemna" << endl;
		}
		else {
			cout << "Liczba " << liczba << " jest rowna zero" << endl;
		}
	}

	return 0;
 
}

