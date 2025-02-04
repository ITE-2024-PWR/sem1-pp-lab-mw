#include <cmath>
#include <iostream>

int main() {
    using namespace std;

    int r;
    float v;
    cout<<"Podaj r: ";
    cin>>r;

    v=((4*(M_PI)*(pow(r,3)))/3); //tu wazne zeby dobrze zapisac (4/3),są 2 sposoby:
    /*
    1. 4 w liczniku i wszystko przez 3 jak wyzej,
    2. wszystko pomnozyc przez (4.0/3.0)
    chodzi o to ze pi jest zmiennoprzecinkowa, jesli pomnozymy przez (4/3) gdzie 4 i 3 to liczby calkowite
    to wynik bedzie zaokraglony do liczby calkowitej, wiec powiedzmy wynik zamiast 0.777 bedzie 1 czyli niedokladny, zly
    */

    cout<<"V: "<<v;
    return 0;
}
