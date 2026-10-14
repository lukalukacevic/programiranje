#include <iostream>
#include <cmath>

using namespace std;

    bool ispravanUnos(int bodovi, int maksimalnoBodova);

    double izracunajPostotak(int bodovi, int maksimalnoBodova);

    int odrediOcjenu(double postotak);

    void ispisiIzvjestaj(int bodovi, int maksimalnoBodova, double postotak, int ocjena) {

        cout << "Bodovi: " << bodovi << " / " << maksimalnoBodova << endl;
        cout << "Postotak: " << postotak << endl;
        cout << "Ocjena: " << ocjena << endl;

    }
int main()
{
    double bodovi, maksimalnoBodova,ocjena;

    cout << "Unesi ostvarene bodove: ";
    cin >> bodovi;

    cout << "Unesi maksimalan broj bodova: ";
    cin >> maksimalnoBodova;

    double postotak = (bodovi / maksimalnoBodova) * 100;

    if(postotak < 50) ocjena = 1;
    if(postotak = 50 && postotak < 65) ocjena = 2;
    if(postotak = 65 && postotak < 80) ocjena = 3;
    if(postotak = 80 && postotak < 90) ocjena = 4;
    if(postotak = 90 && postotak <=100) ocjena = 5;

    ispisiIzvjestaj(bodovi, maksimalnoBodova, postotak, ocjena);


    return 0;
}
