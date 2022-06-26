#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    bobo;
    long long a,b,k;
    cin>>a>>b>>k;
    if (a%k==0 && b%k==0)
    {
        cout<<"Both"<<endl;return 0;
    }
    else if (a%k==0 || a==k)
    {
        cout<<"Memo"<<endl;return 0;
    }
        else if (b%k==0)
    {
        cout<<"Momo"<<endl;return 0;
    }
        else
    {
        cout<<"No One"<<endl;return 0;
    }

}
