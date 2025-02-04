#include <cmath>
#include <iostream>

int main() {
    using namespace std;

    float k, a, p, n;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj p: ";
    cin>>p;
    cout<<"Podaj n: ";
    cin>>n;

    k=(a*(pow(1+(p/100),n)));

    cout<<"K: "<<k;
    return 0;
}
