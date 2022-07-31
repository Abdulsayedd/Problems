#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
        unsigned long long n,m;cin>>n>>m;
            bool f = true;
            map<long long,long long>mp;
            for(unsigned long long i = 1 ; i <= m ; i++)
            {
                if(mp[n%i])
                {
                    f=false; break;
                }
                mp[n%i]++;
            }
           // for(auto i : mp)cout<<i.first<<" "<<i.second<<"\n";
            f?cout<<"YES"<<endl:cout<<"NO"<<endl;
}