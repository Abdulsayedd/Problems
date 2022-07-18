#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string x;cin>>x;
        bool f = true;
            for(int i = 0 ; i < n/2 ; i++)
            {
                if(x[i]!=x[n-i-1] && x[i]+1!=x[n-i-1]-1 && x[i]-1!=x[n-i-1]+1)
                {
                    f=false;break;
                }
            }
            f?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}