#include <iostream>
#include <cstdlib>

using namespace std;

bool jeParan(int broj) {
    return broj % 2 == 0;
}

int apsolutnaVrijednost(int broj) {
    return abs(broj);
}

int kvadrat(int broj) {
    return broj * broj;
}

void ispisiAnalizu(int broj) {
    cout << "Broj je " << (jeParan(broj) ? "paran" : "neparan") << "." << endl;
    cout << "Apsolutna vrijednost: " << apsolutnaVrijednost(broj) << endl;
    cout << "Kvadrat: " << kvadrat(broj) << endl;
}

int main() {
    int broj;

    do {
        cout << "Unesi cijeli broj: ";
        cin >> broj;
    } while (broj < -100 || broj > 100);

    ispisiAnalizu(broj);

    return 0;
}
