#include <iostream>
using namespace std;

//funkcja metody polawiania przedzialu
int polprzed(int tab[], int l, int p, int n)
{
    //warunek zakończenia rekurencji (pusty przedzial)
    if (l>p)
        return -1;

    int sr = ((l+p)/2); //srodek

    if (tab[sr]==n)
        return sr;  //element znaleziony, znajduje sie w srodku

    //szukamy po lewej stronie
    if ((tab[l]<tab[p] && n<tab[sr]) || (tab[l]>tab[p] && n>tab[sr]))
        return polprzed(tab, l, sr-1, n);
    else
        return polprzed(tab, sr+1, p, n);
}

int main()
{
    int n, a;

    cout<<"Ile elementow w tablicy? " << endl;
    cin>>a;
    int tab[a];

    cout<<"Wpisz elementy w tablice: " << endl;
    for (int i=0; i<a; i++)
        cin>>tab[i];

    cout<<"Jakiego elementu szukac? " << endl;
    cin>>n;

    //sortowanie danych w tablicy metoda sortowania babelkowego
    for (int i=0; i<a-1; i++) // a-1 zamiast n, bo musimy przejść przez całą tablicę
        for (int j=1; j<a-i; j++) // a zamiast n
            if (tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]); //zamiana miejscami

    //wyswietlanie posortowanej tablicy (ulatwi uzytkownikowi sprawdzenie dzialania programu)
    cout<<"Posortowana tablica: ";
    for (int i=0; i<a; i++)
        cout<<tab[i]<<" ";

    cout<<endl;

    //wyszukiwanie elementu metoda polawiania przedzialu
    int wynik=polprzed(tab, 0, a-1, n);

    //Sprawdzanie czy element został znaleziony
    if (wynik==-1) {
        cout<<"Element "<<n<<" nie wystepuje w tablicy."<<endl;
    } else {
        cout<<"Element "<<n<<" wystepuje po raz pierwszy na pozycji "<<wynik<<" w tablicy (elementy numerowane od zera)"<<endl;
    }

    return 0;
}
