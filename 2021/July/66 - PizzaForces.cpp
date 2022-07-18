#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n ;

    cin>>n ;
    while (n--)
    {
        unsigned long long x;
        cin>>x;
        if ( x <=6)
        {
            cout<<15<<endl;
        }
        else
        {
            if (x%2==0)
            {
                cout<<(x*5)/2<<endl;
            }
            else
            {
                x++;
                cout<<(x*5)/2<<endl;
            }
        }
    }

}
