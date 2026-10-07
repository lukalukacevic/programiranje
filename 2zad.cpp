#include <iostream>
#include <cmath>

using namespace std;

void ispisiAnalizu(int broj)
{
    if(broj%2==0)
    {
        cout << "Paran je" << endl;
    }
}

int apsolutna_vrijednost(int broj)
{
    if(broj<0)apsolutna_vrijednost(int broj)=broj*-1;
    cout << "Apsolutna vrijednost" << apsolutna_vrijednost(int broj) << endl;
}

int kvadrat(int broj) {
    cout << broj*broj << kvadrat << endl;
}

int main()
{
    cout << "Unesi broj: " << endl;
    cin << broj;

    /*bool jeParan(int broj);
    int apsolutnaVrijednost(int broj);
    int kvadrat(int broj);
    void ispisiAnalizu(int broj);
    */
    return 0;
}
