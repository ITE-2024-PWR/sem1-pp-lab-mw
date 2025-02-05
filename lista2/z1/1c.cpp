#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    using namespace std;
    float pi=M_PI;

    cout<<"Liczba pi: "<<endl;

    for(int i=1; i<10; i++)
        {
            cout<<setprecision(i)<<pi<<endl;
        }
    return 0;
}
