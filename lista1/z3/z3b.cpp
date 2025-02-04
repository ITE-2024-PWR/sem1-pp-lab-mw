#include <iostream>

int main()
{
    using namespace std;

    int a, b, c, n=0, suma, srednia;

    cout<<"Podaj a: ";
    cin>>a;

    n=n+1;

    cout<<"Podaj b: ";
    cin>>b;

    n=n+1;

    cout<<"Podaj c: ";
    cin>>c;

    n=n+1;

    suma=(a+b+c);
    srednia=(suma/n);

    if(srednia>5)
        {
            cout<<"Wysoka srednia: "<<srednia<<endl;
        }
    else
        {
            cout<<"Srednia :"<<srednia<<endl;
        }

    cout<<"Suma: "<<suma<<endl;
}
