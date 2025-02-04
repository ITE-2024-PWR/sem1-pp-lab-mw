#include <cmath>
#include <iostream>

int main() {
    using namespace std;

    float a, b, c, s, rad;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj ile stopni: ";
    cin>>s;

    rad=((s*M_PI)/180); //stopnie na radiany

    c=(sqrt((a*a)+(b*b)-2*a*b*cos(rad)));

    cout<<"C: "<<c;
    return 0;
}
