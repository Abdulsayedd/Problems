#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define itn long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
#define what(x) cerr << #x << " is " << x << endl;
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
int fun(int n)
{
    int c=0;
    int mx=1;
    while (!(n % 2))
    {
        n>>=1;c++;
    }
    if (c)mx=max({mx,2LL,c});
    int rng=sqrt(n);
    for (int i=3;i<=rng;i+=2)
    {
        c=0;
        while (n%i==0)
        {
            c++;
            n = n / i;
        }
        if(c)mx=max({mx,i,c});
    }
    if (n > 2)mx=n;
    return mx;
}
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<fun(n)<<"\n";
    }
}