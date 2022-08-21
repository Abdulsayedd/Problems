#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
bool comp(pair<ll,pair<ll,ll>>p,pair<ll,pair<ll,ll>>p1)
{
    return p.first>p1.first;
}
int main (){
    pre;
    vector<pair<ll,pair<ll,ll>>>v;
    ll n;cin>>n;
    for(ll i = 0 ; i < n ; i++)
    {
        ll h,h1;cin>>h>>h1;
        v.push_back({h-h1,{h,h1}});
    }
    sort(v.begin(),v.end(),comp);
    ll s=0,ans=0;
    for(ll i = 0 ; i < n ; i++)
    {
        if(v[i].second.first>s)
        {
            ans+=v[i].second.first;
            ans-=s;
            s=v[i].second.first;
        }
        s-=v[i].second.second;
    }
    cout<<ans<<"\n";
}