#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        long long n,m;cin>>n>>m;
        if(m!=1)
        {
            cout<<"YES"<<"\n"<<n<<" "<<n*m++<<" ";
            cout<<n*m<<"\n";
        }
        else cout<<"NO"<<endl;
    }
}

