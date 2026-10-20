#include <iostream>
#include <cmath>

using namespace std;

    bool ispravanUnos(int bodovi, int maksimalnoBodova);

    double izracunajPostotak(int bodovi, int maksimalnoBodova) {

    double postotak = ((double)bodovi / maksimalnoBodova) * 100;

    return postotak;
    }

    int odrediOcjenu(double postotak) {
    int ocjena;
    if(postotak < 50) {
         ocjena = 1;
    } else if(postotak < 65) {
         ocjena = 2;
    } else if(postotak < 80) {
        ocjena = 3;
    } else if(postotak < 90) {
         ocjena = 4;
    } else if(postotak <=100) {
         ocjena = 5;
         }

    return ocjena;
    }

    void ispisiIzvjestaj(int bodovi, int maksimalnoBodova, double postotak, int ocjena) {

        cout << "Bodovi: " << bodovi << " / " << maksimalnoBodova << endl;
        cout << "Postotak: " << postotak << endl;
        cout << "Ocjena: " << ocjena << endl;

    }
int main()
{
    double bodovi, maksimalnoBodova,ocjena,postotak;

    cout << "Unesi ostvarene bodove: ";
    cin >> bodovi;

    cout << "Unesi maksimalan broj bodova: ";
    cin >> maksimalnoBodova;

    if (bodovi<0 || bodovi>maksimalnoBodova || maksimalnoBodova<=0) {
        cout << "Neispravni unos";
        return 0;
    }

    postotak=izracunajPostotak(bodovi,maksimalnoBodova);

    ocjena=odrediOcjenu(postotak);


    ispisiIzvjestaj(bodovi, maksimalnoBodova, postotak, ocjena);


    return 0;
}
