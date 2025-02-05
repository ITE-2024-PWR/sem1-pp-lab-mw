#include <iostream>

int main() {
    using namespace std;

    char odp, odp2; //odp - podpunkt, odp2 - tak/nie
    int i, j, k;

    do{

        cout<<"Ktory podpunkt chcesz zrobic?"<<endl;
        cin>>odp;

        cout<<"Podaj i: "<<endl;
        cin>>i;
        cout<<"Podaj j: "<<endl;
        cin>>j;

        if(odp=='a'){
            k=++i+j++;
        }
        else if(odp=='b'){
            k=i++*++j;
        }
        else if(odp=='c'){
            k=(i++)+(--j);
        }
        else if(odp=='d'){
            k=((-(i++))/(++j));
        }
        else if(odp=='e'){
            k=((-(i++))-(j--));
        }
        else if(odp=='f'){
            k+=(-(i++))-(++j);
        }
        else if(odp=='g'){
            k=(i++)+(++j);

        }
        else if(odp=='h'){
            k=*(&i)*j;
        }
        else if(odp=='i'){
            int *p = &i; //deklaracja wskaznika p ktory wskazuje na i
            k=*p*j;
        }
        else if(odp=='j'){
            cout<<"Podaj k: "<<endl;
            cin>>k;

            if(-(k--)==(--i))
                cout<<"k jest rowne i"<<endl;
            else
                cout<<"k nie jest rowne j"<<endl;

            cout<<"i po wykonaniu programu: "<<i<<endl;
            cout<<"k po wykonaniu programu: "<<k<<endl;
        }
        else if(odp=='k'){
            cout<<"Podaj k: "<<endl;
            cin>>k;

            k^=(i^j);
        }
        else if(odp=='l'){
            cout<<"Podaj k: "<<endl;
            cin>>k;

            if(((++k)==(++k)+((--i)^(j--))))
                cout<<"Prawa jest rowna lewej"<<endl;
            else
                cout<<"Prawa nie jest rowna lewej"<<endl;

            cout<<"i po wykonaniu programu: "<<i<<endl;
            cout<<"j po wykonaniu programu: "<<j<<endl;
            cout<<"k po wykonaniu programu: "<<k<<endl;
        }

        if(odp!='j' && odp!='l'){
            cout<<"Wynik: "<<k<<endl;
            cout<<"i po wykonaniu programu: "<<i<<endl;
            cout<<"j po wykonaniu programu: "<<j<<endl;
        }

        cout<<"\nChcesz sprawdzic kolejny podpunkt? t/n"<<endl;
        cin>>odp2;

    }while(odp2!='n');

}
