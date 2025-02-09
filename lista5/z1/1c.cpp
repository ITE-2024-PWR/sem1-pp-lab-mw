#include <iostream>

using namespace std;

int main()
{

    string s;
    char znak;
    cout<<"Podaj napis do sformatowania : "<<endl;

    while((znak=getchar())!='\n') {
        s+=znak;  // tworzenie napisu przez dodawanie po kolei znakow do stringa
    }

///*wariant podstawowy

    for(int i=0;i<s.length();i++) {

        if(s[0]>=97 && s[0]<=122) { //zamiana pierwszej litery zdania na duza jesli nie jest
            s[0]=s[0]-32;
        }

        if(s[i]>=65 && s[i]<=90) { //zamiana wszystkich liter na male jesli nie sa
            s[i]=s[i]+32;
        }
    }


    for(int i=0;i<s.length();i++) { //petla do zamiany pierwszych liter po spacji na duze
        if(s[i]==32) {
            if(s[i+1]>=97 && s[i+1]<=122) {
                s[i+1]=s[i+1]-32; //zamiana pierwszej litery po spacji na duza
            }
        }
    }
//*/

/*wariant rozszerzony
    for(int i=0;i<s.length();i++) {

        if(s[0]>=97 && s[0]<=122) { //zamiana pierwszej litery zdania na duza jesli nie jest
            s[0]=s[0]-32;
        }

        if(s[i]>=65 && s[i]<=90) { //zamiana wszystkich liter na male jesli nie sa
            s[i]=s[i]+32;
        }

    }
 */

    cout<<"Napis po sformatowaniu: "<<s<<endl;
    return 0;
}
