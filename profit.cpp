#include <iostream>
#include <string>

int main()
{
    using namespace std;
    int n;
    double m;
    double x= 1;
    cout << "tedad rooz";
    cin>> n;
    cout<< "darsad sood";
    cin>> m;
    m= m/100;
    for (int i=0 ; i<=n; i++)
    {
        x=x+(x*m);
    }
    cout<<x;
    return 0;
}
    