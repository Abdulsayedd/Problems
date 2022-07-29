#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define ll long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
ll pr[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0,0, 1, 0, 1, 0, 0, 0, 1, 0, 1};
ll BitsSetTable256[256];
void ini()
{
    BitsSetTable256[0] = 0;
    for (ll i = 0; i < 256; i++)
    {
        BitsSetTable256[i] = (i & 1) +BitsSetTable256[i / 2];
    }
}
ll countSetBits(ll n)
{
    return (BitsSetTable256[n & 0xff] +
            BitsSetTable256[(n >> 8) & 0xff] +
            BitsSetTable256[(n >> 16) & 0xff] +
            BitsSetTable256[n >> 24]);
}
int main (){
    pre;
    ini();
    ll pref[100005];
    pref[0]=0;
    for(ll i =1 ; i <= 100000 ; i++)
    {
        pref[i]=pref[i-1]+pr[countSetBits(i)];
    }
/*    for(ll i = 1 ; i <= 102 ; i++)
    {
        cout<<i<<" "<<pref[i]<<"\n";
    }*/
    ll t;cin>>t;
    while(t--)
    {
        ll l,r;cin>>l>>r;
        if(l==0)l++;
        ll sum=0;
        for(int i=l ; i<=r ;i++)
        {
            sum+=pr[countSetBits(i)];
        }
        //cout<<sum<<"*\n";
        cout<<pref[r]-(pref[l-1])<<"\n";
    }
}