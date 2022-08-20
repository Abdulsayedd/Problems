#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int n,a,b,c;
ll mx=-123;
int dp[4009];
ll fun(ll ans)
{
    if(ans==0)
    {
        return 0;
    }
    if(ans<0)return -1032443829;
    if(dp[ans]!=-1)return dp[ans];
    ll aa,bb,cc;
    aa=fun(ans-a);
    bb=fun(ans-b);
    cc=fun(ans-c);
    dp[ans]=max({aa,bb,cc})+1;
    return dp[ans];
}
int main () {
    pre;
    cin>>n>>a>>b>>c;
    memset(dp,-1,sizeof dp);
    cout<<fun(n);
}