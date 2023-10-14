#include <iostream>
using namespace std;

int l, k;

int main()
{
    cout << "Podaj liczbe uczestnikow znajdujacych sie na imprezie: ";
    cin >> l;

    if (l <= 0) {
        cout << "Podano bledna informacje!" << endl;
    }
    else {
        cout << "Podaj ilosc kawalkow do rozdania: ";
        cin >> k;
        cout << "Goscie otrzymaja " << k / l << " kawalkow, a organizator " << k % l << endl;
    }

    return 0;

}


