#include <iostream>
using namespace std;

int l1, l2, l3;


int main()
{
    int najw = 0;
    cout << "Wprowadz trzy liczby: " << endl;
    cin >> l1 >> l2 >> l3;

    if (najw <= l1) {
        najw = l1;
    }
    if (najw <= l2) {
        najw = l2;
    }
    if (najw <= l3) {
        najw = l3;
    }

    cout << "Najwieksza liczba: " << najw << endl;

    return 0;
}