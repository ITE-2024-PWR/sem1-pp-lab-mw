#include <iostream>
using namespace std;

//struktura danych osob
struct Osoba {
    char imie[20];
    char nazwisko[30];
    int wiek;
};

int main()
{
    int n;
    cout<<"Ile osob chcesz w bazie danych? ";
    cin>>n;

//tablica struktur
    struct Osoba osoby[n];
    cout<<endl;

//petla do wprowadzenia danych w tablice
    for(int i=0; i<n; i++) {
        cout<<"DANE OSOBY "<<i+1<<endl;
        cout<<"Imie: ";
        cin>>osoby[i].imie;
        cout<<"Nazwisko: ";
        cin>>osoby[i].nazwisko;
        cout<<"Wiek: ";
        cin>>osoby[i].wiek;
    }

    char odp;
    int indeks;

//petla do modyfikacji danych w tablicy jesli uzytkownik zechce
    for(;;){
        cout<<"\nCzy chcesz zmodyfikowac dane? t/n\n";
        cin>>odp;

        if(odp=='t') {
            cout<<"Podaj indeks osoby do modyfikacji danych: ";
            cin>>indeks;

            cout << "Podaj nowe imie: ";
            cin >> osoby[indeks].imie;
            cout << "Podaj nowe nazwisko: ";
            cin >> osoby[indeks].nazwisko;
            cout << "Podaj nowy wiek: ";
            cin >> osoby[indeks].wiek;
        } else break;
    }

//wyswietlanie bazy danych
    cout<<"\nDane w bazie danych osobowych: "<<endl;
    cout<<"Imie\tNazwisko\tWiek"<<endl;
    for(int i=0; i<n; i++){
        cout<<osoby[i].imie<<"\t"<<osoby[i].nazwisko<<"\t\t"<<osoby[i].wiek<<endl;
    }


    return 0;
}
