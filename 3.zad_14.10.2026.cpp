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

    cout << "Unesi kordinate prve tocke: ";
    cin >> x1 >> y1;

    cout << "Unesi kordinate druge tocke: ";
    cin >> x2 >> y2;

    double rezultat = udaljenost(x1, y1, x2, y2);

    ispisiUdaljenost(rezultat);

    return 0;
}
