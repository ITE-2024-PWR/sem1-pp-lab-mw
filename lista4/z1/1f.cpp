#include <iostream>
#include <cstdlib>

using namespace std;


//tablica globalna i lokalna obie są w tym programie, mozna wybrac jedną z nich robiąc z innej notatke
//domyślnie "uruchomiona" jest tablica lokalna

//
//int *tab; //tablica globalna, wskaznik na tablice dynamiczna
//

//funkcje:
//losowe wypelnianie tablicy
void los(int *tab, int n)
{
    srand(time(NULL));

    for(int i=0; i<n; i++)
        tab[i]=rand()%100;
}

//srednia arytmetyczna
float sred(int *tab,int n)
{
    float suma=0.0;

    for(int i=0; i<n; i++)
        suma+=tab[i]; //obliczanie sumy elementow

    float srednia=(suma/n);

    return srednia;
}


//mediana czyli najpierw sortujemy tablice a potem szukamy mediany
float med(int *tab, int n)
{
    float mediana;

    //sortowanie tablicy
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
            if(tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]); //zamiana miejscami


    //szukanie mediany
    if(n%2==1) //nieparzysta liczba elementow w tablicy
        mediana=tab[n/2]; //mediana jest wartoscia w srodku tablicy

    else //parzysta liczba elementow w tablicy
        mediana=((tab[(n/2)-1]+tab[n/2])/2.0); //mediana jest srednia dwoch srodkowych elementow

    return mediana;
}


float mod(int *tab, int n) //dluga bo trzeba wziac pod uwage wyjatki
{
    int naj=0; // Największa liczba wystąpień
    int licznosci[100]={0}; // Liczność elementów w zakresie 0-99

    int mody[100]; // Tablica przechowująca najczęściej występujące liczby (bierzemy pod uwage ze mogą byc np 2 elementy wystepujace najwiecej jednoczesnie TYLE SAMO razy)
    int mcount = 0; // Licznik liczby elementów w mody[]

    // Liczenie liczności elementów
    for (int i=0; i<n; i++)
    {
        licznosci[tab[i]]++; // Jeśli element się pojawia, zwiększamy jego liczność
    }

    // Szukamy największej liczby wystąpień
    for (int i=0; i<100; i++)
    {
        if (licznosci[i]>naj)
        {

            naj=licznosci[i]; // Największa liczba wystąpień
            mcount=0; // Czyszczenie poprzednich mody
            mody[mcount++]=i; // Dodajemy bieżący element jako nową modę
        }
        else if(licznosci[i]== naj&&naj>0)
        {
            mody[mcount++]=i; // Dodajemy element, jeśli ma tę samą liczbę wystąpień
        }
    }

    if (naj<=1)
    {
        cout << "Brak mody" << endl;
    }
    else
    {
        cout << "Moda: ";
        for (int i=0; i<mcount; i++)
        {
            cout << mody[i] << ", "; // Wypisanie wszystkich elementów w mody[]
        }
        cout << endl;
    }
}





int main()
{
    int n;

    //deklaracja tablicy liczbowej
    cout<<"Podaj rozmiar tablicy: "<<endl;
    cin>>n;


    //
    int tab[n]; //tablica jako zmienna lokalna funkcji main (zrobic z niej notatke do uzycia t. globalnej)
    //
    //
    //tab = new int[n]; //dynamiczna tablica o rozmiarze n
    //



    los(tab, n); // wywolanie funkcji losowo uzupelniajacej tablice

    //wyswietlenia tablicy ulatwi sprawdzenie poprawnosci programu
    cout<<"Tablica: "<<endl;
    for(int i=0; i<n; i++)
        cout<<tab[i]<<" ";

    cout<<endl;

    cout<<"Srednia arytmetyczna tablicy: "<<sred(tab,n)<<endl;
    cout<<"Mediana posortowanej tablicy: "<<med(tab,n)<<endl;
    cout<<"Moda tablicy: "<<mod(tab,n)<<endl;



    return 0;
}
