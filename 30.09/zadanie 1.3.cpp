
#include <iostream>
using namespace std;

int liczba;


int main()
{
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba == 0) {
        cout << "Podano zero" << endl;
    }
    else {
        if (liczba % 2 != 0) {
            cout << "Liczba " << liczba << " jest nieparzysta" << endl;
        }
        else {
            cout << "Liczba " << liczba << " jest parzysta" << endl;
        }
    }

    return 0;
}

