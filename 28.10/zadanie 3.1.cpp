#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float x, y;
	cout << "Wprowadz dwie liczby:" << endl;
	cin >> x >> y;


	cout << fixed << showpoint;
	cout << setprecision(2);
	
	cout << "Suma: " <<  x + y << endl;
	cout << "Roznica: " << x - y << endl;
	cout << "Iloczyn: " <<  x * y << endl;
	cout << "Iloraz: " <<  x / y << endl;

	return 0;
}