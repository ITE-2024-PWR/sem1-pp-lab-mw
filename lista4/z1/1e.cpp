#include <iostream>

using namespace std;

void mnoz(int n)
{
    cout<<"Mnozenie\t\tDodawanie"<<endl;
    for(int i=1; i<=10; i++)
        {
        cout<<n<<" * "<<i<<" = "<<(n*i)<<"\t\t"<<n<<" + "<<i<<" = "<<(n+i)<<endl;
        }
}

int main()
{
    for(int j=1; j<=10; j++) {
        mnoz(j);
        cout<<endl;
    }
    return 0;
}
