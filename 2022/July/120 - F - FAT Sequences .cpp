#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long sum=0,h;
long long const MOD=1000000007;
int main () {
    pre;
    vector<long long>v(1000005);
    v[1]=1;
    v[2]=2;
    for(int i = 3 ; i < 1000005 ; i ++)
    {
        v[i]=((v[i-2]%MOD)+(v[i-1]%MOD)+1)%MOD;
    }
    int t;cin>>t;
    while(t--)
    {
        sum=0;
        int n;cin>>n;
        cout<<v[n]<<"\n";
    }
}