#include <iostream>
using namespace std;

int l, n, wynik=0;

int main() {
	
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << "Suma szeregu: ";

	for (int i = 1; i <= n; i++) {
		l += i;
		wynik += l;
		if (i < n) {
			cout << l << " + ";
		}
		else {
			cout << l;
		}
	}
	
	cout << " = " << wynik << endl;

	return 0;
}