#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    using namespace std;

    int n;

    cout<<"Ile wprowadzic liczb do tablicy? "<<endl;
    cin>>n;

    float A[n], B[n];

    //wprowadzenie w A
    cout<<"Podaj " <<n<< " liczby: "<<endl;
    for(int i=0; i<n; i++)
        cin>>A[i];

    //wyswietlenie A
    cout<<"tablica A: "<<endl;
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";


    srand(time(NULL));

    //wypelnienie B
    for(int i=0; i<n; i++)
        B[i]=rand()%100+1;

    //wywietlanie B
    cout<<endl<<"tablica B: "<<endl;
    for(int i=0; i<n; i++)
        cout<<B[i]<<" ";

    
    float C[n];

    //wypelnianie C
    for(int i=0; i<n; i++)
        C[i]=A[i]*B[i];

    //wyswietlanie C
    cout<<endl<<"Iloczyny elemntow tablic: "<<endl;
    for(int i=0; i<n; i++)
        cout<<C[i]<<" ";



    return 0;
}
