#include <iostream>

int main() {
    using namespace std;

    int d;
    string z;

    cout<<"Podaj dlugosc boku: ";
    cin>>d;
    cout<<"Podaj wybrany znak: ";
    cin>>z;

    for(int i=1;i<=d;i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<z;
        }
        cout<<endl;
    }
    return 0;
}
