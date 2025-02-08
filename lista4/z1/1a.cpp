#include <iostream>

int main()
{
    using namespace std;

    //deklaracja tablicy znakow oraz tablicy licznosci danego znaku

    //char tab[100]="Ala ma kota"; - moze byc z gory zadeklarowany napis lub:
    string tab;
    int licznosci[256]={0};

    cout<<"Podaj napis: "<<endl; //linie do usuniecia jesli sie z gory zadeklaruje napis
    getline(cin, tab);     //-||-

    //zliczanie wystapien danego znaku
    for(int j=0; tab[j]; j++) {
        licznosci[tab[j]]++;
    }

    //wyswietlanie licznosci danego znaku
    for(int j=0; tab[j]; j++) {
        if(licznosci[tab[j]]>=1)
            cout << "Ilosc "<<tab[j] <<" : "<<licznosci[tab[j]]<< endl;
    }



    return 0;
}
