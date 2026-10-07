#include <iostream>
#include <cmath>

using namespace std;
void ispisirezultat(double rezultat);

double a,b;

void zbroj () {
    double zbroj=a+b;
}
void razlika () {
    double razlika=a-b;
}
void umnozak () {
    double umnozak=a*b;
}
void kolicnik () {
    double kolicnik=a/b;
}


int main()
{
    cout << "Unesi prvi broj:" << endl;
    cout << "Unesi drugi broj:" << endl;
    cout << "zbroj = " << zbroj << endl;
    cout << "razlika = " << razlika << endl;
    cout << "umnozak = " << umnozak << endl;
    cout << "kolicnik = " << kolicnik << endl;
    if(a==0 || b==0) cout << "S 0 se ne djeli!" << endl;
    else cout << "Kolicnik: " << kolicnik << endl;

    return 0;
}
