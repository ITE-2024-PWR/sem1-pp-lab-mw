#include <iostream>
#include <string>

//algorytm nie uznaje spacji jako znak do zliczenia, mozna ją dodac dodając do if dla znaku: || s[i]==32

using namespace std;

int main() {
    int c=0, l=0, z=0; //cyfry, litery, znaki
    string s;
    char znak;

    cout<<"Podaj napis: "<<endl;
    while((znak=getchar())!='\n') {
        s+=znak;  // tworzenie napisu przez dodawanie po kolei znakow do stringa
    }

    for(int i=0;i<s.length();i++) {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122) { //tablica ascii (duze litery: 65-90, male: 97-122)
            l++;
        }
        if(s[i]>=48 && s[i]<=57) { //tablica ascii
            c++;
        }
        if(s[i]>=33 && s[i]<=47 || s[i]>=58 && s[i]<=64 || s[i]>=91 && s[i]<=96) { //tablica ascii
            z++;
        }
    }

    cout<<"Liczba liter: "<<l<<endl;
    cout<<"Liczba cyfr: "<<c<<endl;
    cout<<"Liczba pozostalych znakow: "<<z<<endl;

    return 0;
}
