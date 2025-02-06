#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//wprowadzanie danych
void in(int n, float* tab)
{
    cout<<"Podaj "<<n<<" liczby: "<<endl;
    for(int i=0; i<n; i++)
        cin>>tab[i];
}

//losowanie elemantow
void los(int n, float* tab)
{
    srand(time(NULL));

    for(int i=0; i<n; i++)
        tab[i]=rand()%100+1;
}

//obliczanie iloczynow
void mnoz(int n, float* tab, float* tab2, float* tab3)
{
    for(int i=0; i<n; i++)
        tab3[i]=tab[i]*tab2[i];
}

//wyswietlanie
void out(int n, float* tab)
{
    for(int i=0; i<n; i++)
        cout<<tab[i]<<" ";
}

int main() {

    int n;
    float A[10], B[10], C[10];

    cout<<"Podaj n: "<<endl;
    cin>>n;

    //wprowadzanie danych
    in(n, A);

    //losowanie elemantow
    los(n, B);

    //obliczanie iloczynow
    mnoz(n,A,B,C);

    //wyswietlanie
    cout<<"Elementy tablicy A: "<<endl;
    out(n, A);
    cout<<endl;

    cout<<"Elementy tablicy B: "<<endl;
    out(n, B);
    cout<<endl;

    cout<<"Elementy tablicy C: "<<endl;
    out(n, C);
    cout<<endl;

    return 0;
}
