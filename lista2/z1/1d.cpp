#include <iostream>

int main()
{
    using namespace std;

    float sr, suma=0.0, max, min;
    int tab[9];

    for (int i=0; i<=9; ++i)
        {
            cout << "Podaj "<<i+1<<" liczbe:  "<<endl;
            cin >> tab[i];

            suma+=tab[i];
        }

    max=tab[0];
    min=tab[0];

    for (int i=1; i<=9; ++i)
        {
        if (tab[i]>max)
            max=tab[i];

        if (tab[i]<min)
            min=tab[i];
        }

    sr=(suma/10);


    cout<<"Srednia arytmetyczna: "<<sr<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Wartosc max: "<<max<<endl;
    cout<<"wartosc min: "<<min<<endl;

    return 0;
}
