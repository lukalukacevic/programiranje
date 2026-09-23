#include <iostream>

using namespace std;

int main()
{


    string a[5] = {"Tesla:", "BMW:", "Mercedes:", "Audi:", "Ferrari:"};
    string b[5] = {"Model 3, Model Y, Model S", "M4, X5, M5", "G - class", "AMG GT coupe", "CLE cabriolet", "A5", "A6", "Q7", "Portofino M, F80, 812 GTS"};

    for(int i=0;i<5;i++) {

        cout << a[i] << " " << b[i] << endl;

    }


    return 0;
}
