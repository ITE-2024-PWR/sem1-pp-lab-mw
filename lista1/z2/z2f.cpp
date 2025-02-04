#include <cmath>
#include <iostream>

int main() {
    using namespace std;

    float a, b, c, w;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;

    while((b+c)==0)
    {
        cout<<"Nie mozna dzielic przez 0! Zmien wartosc b lub c: "<<endl;
        cout<<"b: ";
        cin>>b;
        cout<<"c: ";
        cin>>c;
    }

    w=(((a*b)/(b+c))+((a*c)/(b+c)));

    cout<<"W: "<<w;
    return 0;
}
