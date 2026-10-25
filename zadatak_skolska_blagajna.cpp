#include <iostream>
#include <iomanip>

using namespace std;


double izracunajIznos(int kolicina);
void evidentirajKupnju(int kolicina, double iznos);
void ispisiKupnju(int redniBroj, double iznos);
void ispisiSazetak();

const double CIJENA_ULAZNICE = 5.0;
const int PRAG_POPUSTA = 5;
const double STOPA_POPUSTA = 0.10;
int ukupnoUlaznica = 0;
double ukupniPrihod = 0.0;

bool ispravanUnos(int kolicina) {
    if (kolicina >= 1 && kolicina <= 30) {
        return true;
    }
        else return false;
}

double  izracunajIznos(int kolicina) {
double osnovniIznos=kolicina*CIJENA_ULAZNICE;
double konacniIznos=osnovniIznos;

if(kolicina>=5) {
    konacniIznos=osnovniIznos-(osnovniIznos*STOPA_POPUSTA);
}
else konacniIznos=osnovniIznos;

return konacniIznos;
}

void evidentirajKupnju(int kolicina, double iznos)
{
    ukupnoUlaznica = ukupnoUlaznica + kolicina;
    ukupniPrihod = ukupniPrihod + iznos;
}

void ispisiKupnju(int redniBroj, double iznos) {
    cout << "Kupnja " << redniBroj << ": "
         << iznos << " EUR" << endl;
}

void ispisiSazetak() {
    cout << "Ukupno prodanih ulaznica: "
         << ukupnoUlaznica << endl;
    cout << "Ukupni prihod: "
         << ukupniPrihod << " EUR" << endl;
}

int main()
{
    int kolicina;
    for (int i = 1; i <= 3; i++) {

        cout << "Unesi broj ulaznica za kupnju "
             << i << ": ";
        cin >> kolicina;


        while (ispravanUnos(kolicina)<1 || ispravanUnos(kolicina)>30) {
            cout << "Neispravan unos!\n";
            cout << "Unesi broj ulaznica za kupnju: ";
            cin >> kolicina;
        }

    double iznos = izracunajIznos(kolicina);
    evidentirajKupnju(kolicina, iznos);
    ispisiKupnju(i, iznos);
    }

    ispisiSazetak();

    return 0;
}


