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
int main (){
    pre;
    ll n;cin>>n;
    ll mxcnt=0,mncnt=0,mx=INT_MIN,mn=INT_MAX;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    for(ll i = 0 ; i < n ; i++)
    {
        if(arr[i]==mx)mxcnt++;
        if(arr[i]==mn)mncnt++;
    }
    if(mx==mn)cout<<0<<" "<<(n*(n-1))/2;
    else
    {
        cout<<mx-mn<<" "<<1LL*mxcnt*mncnt;
    }
}