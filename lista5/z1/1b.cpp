#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char znak;
    cout<<"Podaj napis do zaszyfrowania: "<<endl;
    while((znak=getchar())!='\n') {
        s+=znak;  // tworzenie napisu przez dodawanie po kolei znakow do stringa
    }

    for(int i=0;i<s.length();i++) {
        if(s[i]>=65 && s[i]<90 || s[i]>=97 && s[i]<122) {
            s[i]=(s[i]+1);
        }
        if(s[i]==122) { //wyjatek dla "z" zeby przeskoczylo do "A" bo w tablicy po "z" jest jakis randomowy znak, obvi bo koniec alfabetu
            s[i]=s[i]-57;
        }
        if(s[i]==90) { //wyjatek, ten sam case co z "z", jak nie wierzysz to zobacz jak wyglada tablica ascii
            s[i]=s[i]+7;
        }
    }

    cout<<"Zaszyfrowany tekst: "<<s<<endl;
    return 0;
}
