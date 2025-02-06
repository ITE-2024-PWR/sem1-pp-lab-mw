#include <iostream>
#include <stdio.h>


//funkcja silnia
long int silnia(int n)
{
    long int silnia = 1;
    for (int i=1; i<=n; i++)
        silnia=silnia*i;
    return silnia;
}

//funkcja fibbonacci
int fib(int n)
{
    int a=0, b=1, c;
    for (int i=2; i<=n; ++i)
    {
        c=(a+b);
        a=b;
        b=c;
    }
    return b;
}

int main() {
    using namespace std;

    long D[3][10];

        for (int j=0; j<10; j++)
        {
            int i=0;
            D[i][j]=silnia(j+1);
        }

    for (int j=0; j<10; j++)
    {
        int i=1;
        D[i][j]=fib(j+1);
    }


    int j=0, i=0;
    cout<<"n\tSIL\tFIB"<<endl;
        for (int j=0; j<10; j++)
        {
            cout<<j+1<<"\t"<<D[i][j]<<"\t"<<D[i+1][j]<<endl;
        }




    return 0;
}
