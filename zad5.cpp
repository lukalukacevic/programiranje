#include <iostream>

using namespace std;

double izracunajStavku(double cijena, int kolicina) {
    return cijena*kolicina;
}
double izracunajMeduzbroj(double stavka1, double stavka2,double stavka3) {
    return stavka1+stavka2+stavka3;
}
double odrediStopuPopusta(double meduzbroj) {
    double popust=0;
    if (meduzbroj>=100) {
        popust=0.10;
    }
    return popust;
}
double izracunajKonacniIznos(double meduzbroj) {
    return meduzbroj*(1-odrediStopuPopusta(meduzbroj));
}
void ispisiRacun(double stavka1, double stavka2, double stavka3,double meduzbroj, double konacniIznos) {
    cout << "Stavka1: " << stavka1 << " EUR" << endl;
    cout << "Stavka2: " << stavka2 << " EUR" << endl;
    cout << "Stavka3: " << stavka3 << " EUR" << endl;
    cout << "Meduzbroj: " << meduzbroj << " EUR" << endl;
    cout << "Popust: " << meduzbroj-konacniIznos << " EUR" << endl;
    cout << "Za platit: " << konacniIznos << " EUR" << endl;
}



int main()
{
    double cijena1,cijena2,cijena3,kolicina1,kolicina2,kolicina3;
    double stavka1,stavka2,stavka3,meduzbroj,konacaniznos;

    cout << "Proizvod 1 — cijena i kolicina:";
    cin >> cijena1 >> kolicina1;

    cout << "Proizvod 2 — cijena i kolicina:";
    cin >> cijena2 >> kolicina2;

    cout << "Proizvod 3 — cijena i kolicina:";
    cin >> cijena3 >> kolicina3;

    if (cijena1<0 || cijena2<0 || cijena3<0 || kolicina1<0 || kolicina2<0 || kolicina3<0) {
        cout << "Neispravan unos!" << endl;
    cout << "Proizvod 1 — cijena i kolicina:";
    cin >> cijena1 >> kolicina1;

    cout << "Proizvod 2 — cijena i kolicina:";
    cin >> cijena2 >> kolicina2;

    cout << "Proizvod 3 — cijena i kolicina:";
    cin >> cijena3 >> kolicina3;

    if (cijena1<0 || cijena2<0 || cijena3<0 || kolicina1<0 || kolicina2<0 || kolicina3<0) {
        cout << "Neispravan unos!" << endl;
        return 0;
    }
    }

    stavka1 = izracunajStavku(cijena1,kolicina1);
    stavka2 = izracunajStavku(cijena2,kolicina2);
    stavka3 = izracunajStavku(cijena3,kolicina3);
    meduzbroj = izracunajMeduzbroj(stavka1,stavka2,stavka3);
    konacaniznos = izracunajKonacniIznos(meduzbroj);
    ispisiRacun(stavka1,stavka2,stavka3,meduzbroj,konacaniznos);


    return 0;
}
