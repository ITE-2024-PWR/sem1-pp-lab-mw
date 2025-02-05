#include <iostream>

int main() {
    using namespace std;

    int n;
    float s=0;

    cout<<"Podaj n: "<<endl;
    cin>>n;


    for(int k=1; k<=n; k++)
    {
        s+=(1.0/((3.0*k)+1.0));
    }

    cout<<"Suma szeregu: "<<s<<endl;
    return 0;
}
