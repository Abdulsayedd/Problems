#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;vector<ll>v;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
ll fun(ll arr[], ll n)
{
    ll sum=0,mul=1;
    for (ll i = 0; i < 30; i++) {
        bool turn = 0;
        ll l = 0;
        for (ll j = 0; j < n; j++) {
            if ((arr[j] & (1 << i)) > 0)
                if (turn)
                    l++;
                else {
                    turn = 1;
                    l++;
                }
            else if (turn) {
                sum += ((mul * l * (l + 1)) / 2);
                turn = 0;
                l = 0;
            }
        }
        if (turn) {
            sum += ((mul*l*(l+1))/2);
            turn = 0;
            l = 0;
        }
        mul*=2;
    }
    return sum;
}

int main (){
    pre;
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll arr[n];
        for(ll i = 0 ; i < n ; i++)cin>>arr[i];
        cout<<fun(arr,n)<<"\n";
    }
}