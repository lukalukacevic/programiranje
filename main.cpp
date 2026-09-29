#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi=3.14159265359;
    double a,b;

    cout << "Unesite prvu katetu:";
    cin >> a;
    cout << "Unesite drugu katetu:";
    cin >> b;


    auto c=sqrt(a*a+b*b);
    double o=a+b+c;
    double p=(a*b)/2;
    double ns=asin(a/c)*(180/pi);

    cout << "Hipotenuza je: " << c << endl;
    cout << "Opseg trokuta je: " << o << endl;
    cout << "Povrsina trokuta je: " << p << endl;
    cout << "Kut nasuprot kateti a je: " << ns << " stupnjeva" << endl;


    return 0;
}
