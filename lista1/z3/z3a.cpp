#include <iostream>

int main()
{
    using namespace std;

    int a,b,s;

    cout<<"Podaj a:";
    cin>>a;
    cout<<"Podaj b:";
    cin>>b;

    if(a>b)
         cout<<"Pierwsza liczba jest wieksza od drugiej"<<endl;
    else if(a==b)
        cout<<"Podane liczby sa rowne"<<endl;
    else
        cout<<"Druga liczba jest wieksza od pierwszej"<<endl;

    s=a+b;

    cout<<"Suma wprowadzonych liczb wynosi: " << s;
    return 0;
}
