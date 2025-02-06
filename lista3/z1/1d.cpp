#include <iostream>

using namespace std;

//obliczanie potegi
double pot(double a, int n)
    {
        if (n==0)
        {
            return 1;  //a^0=1
        }
    //wywołanie rekurencyjne funkcji
    return a*pot(a, n-1);
}

int main()
{
    int n;
    double a;

    //wprowadzanie a i n
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj n: ";
    cin>>n;

    //oblicanie potegi wywolujac funkcje (nizej w coutcie jest)


    //wynik
    cout<<endl<<a<<" do potegi " << n << " wynosi: " <<pot(a, n)<<endl;

    return 0;
}