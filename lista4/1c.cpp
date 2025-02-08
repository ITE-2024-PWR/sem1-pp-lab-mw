#include <iostream>

int main()
{
    using namespace std;

    //zadeklarowanie wielkosci tablicy
    int n;
    cout<<"Podaj n: "<<endl;
    cin>>n;

    //wpisanie elementow w tablice
    double tab[n];
    cout<<"Wpisz elementy tablicy: "<<endl;
    for(int i=0;i<n;i++)
        cin>>tab[i];

    //sortowanie babelkowe
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
            if(tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]); //zamiana miejscami

    //wyswietlanie posortowanych elementow
    cout<<"Posortowane elementy: "<<endl;
    for (int i=0; i<n; i++)
        cout<<tab[i]<<" ";

    return 0;
}
