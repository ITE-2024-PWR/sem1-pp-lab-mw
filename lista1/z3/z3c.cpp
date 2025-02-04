#include <cmath>
#include <iostream>
#include <math.h>

int main()
{
   using namespace std;

    int a,b,c,p,q,x1,x2,delta,pd,xy;

    cout<<"Podaj a";
    cin>>a;
    cout<<"Podaj b";
    cin>>b;
    cout<<"Podaj c";
    cin>>c;

    delta=((b*b)-4*a*c);

    p=((-b)/(2*a));
    q=((-delta)/(4*a));

    pd=(sqrt(delta));

    x1=(((-b)-pd)/(2*a));
    x2=(((-b)+pd)/(2*a));

    xy = ((a*0)+(b*0)+c);

    cout<<"Wspolrzedne wierzcholka: ("<<p<<","<<q<<") "<<endl;
    cout<<"Miejsca zerowe: "<<x1<<" i "<<x2<<endl;
    cout<<"Punkt przeciecia z osia OY: "<< xy<<endl;
    return 0;
}
