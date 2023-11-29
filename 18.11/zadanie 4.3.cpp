#include <iostream>
using namespace std;

int main() {

	int tab[10][10]{};

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			
			if (j == 0) {
				tab[i][j] = i;
			}
			else
			if (j == 1) {
				tab[i][j] = tab[i][j - 1] + tab[i][j - 1];
			}
			else
			if (j == 2) {
				tab[i][j] = pow(tab[i][j - 2], 2);
			}
			else
			if (j == 3) {
				tab[i][j] = (i+1) + (j+1); // nie wiedziałem, czy numerować wiersze i kolumny od zera czy od jeden, zdecydowałem się na drugą opcję
			}
			else
			if (j == 4) {
				tab[i][j] = (i+1) - (j+1); // tutaj tak samo
			}
			else {
				tab[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

//Napisz program, który w zadeklarowanej tablicy dwuwymiarowej 10x10 umieszcza :
//-w pierwszej kolumnie liczby od 0 do 9;
//-w drugiej sumę tych liczb(np. 0 + 0, 1 + 1 itd..);
//*Część bonusowa :
//-w trzeciej – kwadraty tych liczb;
//-w czwartej – sumę numeru wiersza i numeru kolumny;
//-w piątej – wynik różnicy numeru wiersza i numeru kolumny;
//-w pozostałych kolumnach 0 (interpretacja graficzna tablicy poniżej).