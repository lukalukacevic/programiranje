#include <iostream>
#include <cmath>

using namespace std;

double kvadrat(double broj)
{
    return broj * broj;
}

double udaljenost(double x1, double y1, double x2, double y2)
{
    return sqrt(kvadrat(x2 - x1) + kvadrat(y2 - y1));
}

void ispisiUdaljenost(double rezultat)
{
    cout << "Udaljenost je: " << rezultat << endl;
}

int main()
{
    double x1, y1, x2, y2;

    cout << "Unesi x1: ";
    cin >> x1;

    cout << "Unesi y1: ";
    cin >> y1;

    cout << "Unesi x2: ";
    cin >> x2;

    cout << "Unesi y2: ";
    cin >> y2;

    double rezultat = udaljenost(x1, y1, x2, y2);

    ispisiUdaljenost(rezultat);

    return 0;
}
