#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	int indeks;
	string imie;
	string nazwisko;
};

//Porównuje indeksy, sluży do sortowania rosnąca
bool porpoind(const Student& a, const Student& b) {
	return a.indeks < b.indeks;
}

int main()
{
	vector<Student> stud = { {111111,"Pawel","Kowalski"},
							 {333333,"Justyna","Kowalska"},
							 {214,"Marek","Szpak"},
							 {124124,"Krystyna","Borkowska"} };

	//funkcja sortująca wektor struktur po indeksie
	sort(stud.begin(), stud.end(), porpoind);

	cout << "Posortowano po indeksie:" << endl;
	for (const auto& array : stud) {
		cout << "Indeks: " << array.indeks << endl
			<< "Nazwisko: " << array.nazwisko << endl
			<< "Imie: " << array.imie << endl << endl;
	}

	return 0;
}

//Napisz program do sortowania wektora struktur studentów według
//numerów indeksów.Struktura Student ma zawierać informacje o :
//imieniu, nazwisku i numerze indeksu.