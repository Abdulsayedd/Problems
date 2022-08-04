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
bool gcd(ll a, ll b)
{
    if (a == 0)
        return b==1;
    return gcd(b % a, a);
}
int main () {
    pre;
    ll t,l,r,h1,h2,ans;cin>>t;
    string x,y,z;
    while(t--)
    {
        ans=-1;
        cin>>l>>r;
        if(r<=10)l=r+1;
        for(ll i = r ; i >= l ; i--)
        {
            x=to_string(i);
            int sz=x.size()/2;
            sz+=(x.size()&1);
            y=x.substr(0,sz);
            z=x.substr(sz,x.size()-sz);
            h1=stoll(y);h2=stoll(z);
            if(gcd(h1,h2)){ans=i;break;}
        }
        cout<<ans<<"\n";
    }
}