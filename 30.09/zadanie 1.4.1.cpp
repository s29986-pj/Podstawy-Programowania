
#include <iostream>
using namespace std;

int l1, l2, l3;

int main()
{
    cout << "Wprowadz trzy liczby: " << endl;
    cin >> l1 >> l2 >> l3;

    if (l1 >= l2 && l1>=l3) {
        cout << "Najwieksza liczba: " << l1 << endl;
    }
    if (l2 >= l1 && l2 >= l3) {
        cout << "Najwieksza liczba: " << l2 << endl;
    }
    if (l3 >= l1 && l3 >= l2) {
        cout << "Najwieksza liczba: " << l3 << endl;
    }

    return 0;
}

