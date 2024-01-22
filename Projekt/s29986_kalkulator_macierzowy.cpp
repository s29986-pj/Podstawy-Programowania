#include <iostream>
//#include <cstdlib>
//funkcja wypełniająca macierz liczbami pseudolosowymi
//void losowe(int** macierz, int wiersze, int kolumny) {
//	for (int i = 0; i < wiersze; i++) {
//		for (int j = 0; j < kolumny; j++) {
//			macierz[i][j] = rand() % 10; //liczby 0..9
//		}
//	}
//}

//funkcja wczytująca podane przez użytkownika wartości do macierzy
void wczytanie(int**& macierz, int& wiersze, int& kolumny) {
	std::cout << std::endl << "Podaj ile wierszy ma miec macierz: ";
	std::cin >> wiersze;
	std::cout << "Podaj ile kolumn ma miec macierz: ";
	std::cin >> kolumny;

	//inicjalizacja macierzy
	macierz = new int* [wiersze];
	for (int i = 0; i < wiersze; i++) {
		macierz[i] = new int[kolumny]; //przydzielenie kolumn
	}

	//wprowadzanie elementów
	for (int i = 0; i < wiersze; i++) {
		for (int j = 0; j < kolumny; j++) {
			std::cout << "Podaj element [" << i + 1 << "][" << j + 1 << "]: ";
			std::cin >> macierz[i][j];
		}
		std::cout << std::endl;
	}
}


//funkcja wypisująca macierz
void wypisanie(int** macierz, int wiersze, int kolumny) {
	for (int i = 0; i < wiersze; i++) {
		for (int j = 0; j < kolumny; j++) {
			std::cout << "\t" << macierz[i][j];
		}
		std::cout << std::endl;
	}
}


//funkcja zwalniająca pamięć
void zwalnianie(int**& macierz) {
	delete[] macierz; //zwolnienie pamięci
	macierz = nullptr; //brak przypisanego obszaru w pamięci, niweluje ewentualne błędy
}


//funkcja dodająca macierze
 int** dodawanie( int** macierzA, int** macierzB, int wiersze, int kolumny ) {
	if (wiersze != kolumny) {
		std::cout << "Operacja dodawanie moze byc wykonana tylko na macierzach kwadratowych" << std::endl;
		return nullptr; //zwraca błąd
	}

	int** wynik = new int* [wiersze]; //inicjalizacja macierzy wynikowej

	for (int i = 0; i < wiersze; i++) {
		wynik[i] = new int[kolumny];
		for (int j = 0; j < kolumny; j++) {
			wynik[i][j] = macierzA[i][j] + macierzB[i][j];
		}
	}

	return wynik;
}


//funkcja odejmująca macierze
 int** odejmowanie(int** macierzA, int** macierzB, int wiersze, int kolumny) {
	 if (wiersze != kolumny) {
		 std::cout << "Operacja dodawanie moze byc wykonana tylko na macierzach kwadratowych" << std::endl;
		 return nullptr; //zwraca błąd
	 }

	 int** wynik = new int* [wiersze]; //inicjalizacja macierzy wynikowej

	 for (int i = 0; i < wiersze; i++) {
		 wynik[i] = new int[kolumny];
		 for (int j = 0; j < kolumny; j++) {
			 wynik[i][j] = macierzA[i][j] - macierzB[i][j];
		 }
	 }

	 return wynik;
 }


//funkcja mnożąca macierze
 int** mnozenie(int** macierzA, int** macierzB, int wierszeA, int kolumnyA, int wierszeB, int kolumnyB) {
	 if (kolumnyA != wierszeB) {
		 std::cout << "Zeby mnozenie macierzy bylo mozliwe, liczba kolumn w macierzy A musi byc rowna liczbie wierszy w macierzy B" << std::endl;
		 return nullptr; //zwraca błąd
	 }

	int** wynik = new int* [wierszeA]; //inicjalizacja macierzy wynikowej

	//dwie pętle służące do poruszania się po elementach macierz
	for (int i = 0; i < wierszeA; i++) {
		wynik[i] = new int[kolumnyB];
		for (int j = 0; j < kolumnyB; j++) {
			wynik[i][j] = 0; //przypisuję zero, aby nie działać na wartościach pustych
			//pętla wykonująca obliczenia
			for (int k = 0; k < kolumnyA; k++) {
				wynik[i][j] += macierzA[i][k] * macierzB[k][j]; 
			}
		}
	}

	return wynik;
}


//funkcja transponująca macierz
 int** transpozycja(int** macierzA, int wiersze, int kolumny) {
	int** wynik = new int* [kolumny]; //inicjalizacja macierzy wynikowej

	for (int i = 0; i < kolumny; i++) {
		wynik[i] = new int[wiersze];
		for (int j = 0; j < wiersze; j++) {
			wynik[i][j] = macierzA[j][i]; //transpozycja - zamiana wierszy z kolumnami
		}
	}

	return wynik;
}



int main() {
	//dwie macierze, na ktorych beda wykonywane operacje
	int** macierzA = nullptr;
	int** macierzB = nullptr;
	int wierszeA, kolumnyA, wierszeB, kolumnyB;

	//wybor operacji
	int jakaOperacja;
	std::cout << "Witaj, ten program sluzy do wykonywania operacji na macierzach. Wybierz te, ktore Cie interesuje:" << std::endl;
	std::cout << "1. Dodawanie" << std::endl;
	std::cout << "2. Odejmowanie" << std::endl;
	std::cout << "3. Mnozenie" << std::endl;
	std::cout << "4. Transpozycja" << std::endl;
	std::cout << "Twoj wybor: ";
	std::cin >> jakaOperacja;
	

	//wprowadzenie macierz
	int jakaMacierz;
	std::cout << std::endl << "Wybierz macierze:" << std::endl;
	std::cout << "1. Domyslne" << std::endl;
	std::cout << "2. Wlasne" << std::endl;
	std::cout << "Twoj wybor: ";
	std::cin >> jakaMacierz;
	
	if (jakaMacierz == 1) {
		wierszeA = wierszeB = 3;
		kolumnyA = kolumnyB = 3;
		int pomocnicza1 = 1;
		int pomocnicza2 = 9;
		
		//domyslne macierze
		macierzA = new int* [wierszeA];
		macierzB = new int* [wierszeB];
		for (int i = 0; i < wierszeA; i++) {
			macierzA[i] = new int[kolumnyA];
			macierzB[i] = new int[kolumnyB];
			for (int j = 0; j < kolumnyA; j++) {
				macierzA[i][j] = pomocnicza1++;
				macierzB[i][j] = pomocnicza2--;
			}
		}

		//inicjalizacja macierz liczbami pseudolowymi
		//losowe(macierzA, wierszeA, kolumnyA);
		//losowe(macierzB, wierszeB, kolumnyB);
	}
	else if (jakaMacierz == 2) {
		//wlasne macierze
		wczytanie(macierzA, wierszeA, kolumnyA);
		if (jakaOperacja != 4) {
			wczytanie(macierzB, wierszeB, kolumnyB);
		}
	}
	else {
		std::cout << "Wybrano zla opcje. Program sie wylaczy." << std::endl;
		return 1;
	}


	//wypisanie wybranych macierzy
	std::cout << std::endl << "Twoja macierz A:" << std::endl;
	wypisanie(macierzA, wierszeA, kolumnyA);
	if (jakaOperacja != 4) {
		std::cout << std::endl << "Twoja macierz B:" << std::endl;
		wypisanie(macierzB, wierszeB, kolumnyB);
	}


	//macierz wynikowa
	int** wynik = nullptr;

	//wykonanie wybranej operacji
	switch (jakaOperacja) {
	case 1:
		//wynik operacji
		std::cout << "\n\nWynik dodawania:" << std::endl;
		wynik = dodawanie(macierzA, macierzB, wierszeA, kolumnyA);
		break;

	case 2:
		//wynik operacji
		std::cout << "\n\nWynik odejmowania:" << std::endl;
		wynik = odejmowanie(macierzA, macierzB, wierszeA, kolumnyA);
		break;

	case 3:
		//wynik operacji
		std::cout << "\n\nWynik mnozenia:" << std::endl;
		wynik = mnozenie(macierzA, macierzB, wierszeA, kolumnyA, wierszeB, kolumnyB);
		break;

	case 4:
		//wynik operacji
		std::cout << "\n\nTransponowana Macierz:" << std::endl;
		wynik = transpozycja(macierzA, wierszeA, kolumnyA);
		break;

	default:
		std::cout << "Wybrano zla opcje. Program sie wylaczy." << std::endl;
		break;
	}

	
	//wypisanie wyniku
	wypisanie(wynik, (jakaOperacja == 4) ? kolumnyA : wierszeA, (jakaOperacja == 3) ? kolumnyB : (jakaOperacja == 4) ? wierszeA : kolumnyA);


	//zwalnianie pamięci
	zwalnianie(macierzA);
	zwalnianie(macierzB);
	zwalnianie(wynik);


	return 0;
}