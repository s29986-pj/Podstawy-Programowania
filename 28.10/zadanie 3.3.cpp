#include <iostream>
using namespace std;

int main() {

	double A, B, C;

	cout << "Rowanie kwadratowe ma postac: Ax^2 + Bx + C" << endl;
	cout << "Podaj wartosci dla A, B i C:" << endl;
	cin >> A >> B >> C;

	cout << "Twoje rownanie to: " << A << "x^2" << " + " << B << "x + " << C << endl;

	double delta;

	delta = pow(B,2) - (4 * A * C);

	if (delta > 0) {
		cout << "Pierwiastek 1: " << (-B - sqrt(delta)) / (2 * A) << endl;
		cout << "Pierwiastek 2: " << (-B + sqrt(delta)) / (2 * A) << endl;
	}
	else {
		if (delta == 0) {
			cout << "Pierwiastek: " << -B / (2 * A);
		}
		else {
			cout << "Brak rozwiazan" << endl;
		}
	}

	

	return 0;
}