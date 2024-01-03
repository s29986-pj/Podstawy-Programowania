#include <iostream>
using namespace std;


int main()
{
	int n, il=0;

	cout << "Podaj liczbe: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0 && i % 3 != 0) il++;
	}

	cout << "Ilosc liczb naturalnych, ktore sa podzielne przez 5 i niepodzielne przez 3: " << il << endl;

	return 0;
}


//Napisz program, który obliczy, ile jest liczb naturalnych(tj.
//całkowitych, dodatnich) nie większych od n które są podzielne przez
//5 ale nie są podzielne przez 3. Liczba n ma być pobrana od
//użytkownika.
