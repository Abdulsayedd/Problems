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
map<ll,ll>mp;
void primeFactors(ll n)
{
    bool two=false;
    while (n % 2 == 0)
    {
        two=true;
        n = n/2;
    }
    if(two)mp[2]++;
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        bool t=false;
        while (n % i == 0)
        {
            t=true;
            n = n/i;
        }
        if(t)mp[i]++;
    }
    if (n > 2)
        mp[n]++;
}
int main (){
        pre;
        ll t;cin>>t;
        while(t--)
        {
            mp.clear();
            ll n;cin>>n;
            ll arr[n];
            for(ll i = 0 ; i < n ; i++)
            {
                cin>>arr[i];
                primeFactors(arr[i]);
            }
            ll sum=0;
            for(auto i : mp)
            {
                sum+=ceil(i.second/3.0);
            }
            cout<<sum<<"\n";
        }
}