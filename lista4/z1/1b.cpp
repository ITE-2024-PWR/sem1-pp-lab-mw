#include <iostream>

//ROZWIĄZANIE ITERACYJNE

int main()
{
    using namespace std;

    //deklarowanie tablicy i elementu szukanego
    char tab[100];
    char s;

    cout<<"Wpisz elementy w tablice: "<<endl;
    cin>>tab;
    cout<<"Jakiego elementu szukac? "<<endl;
    cin>>s;

    //petla szukajaca elementu zadanego
    for(int i=0;i<tab[i];i++)
    {
        if(tab[i]==s)
        {
            cout<<"Element "<<s<<" wystepuje po raz pierwszy na pozycji "<<i<<" w tablicy (numerowanej od zera)"<<endl;
            break;
        }
    }
    return 0;
}
