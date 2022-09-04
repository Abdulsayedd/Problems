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
string x,y;
const int MOD = 1000000007;
set<string>s;
void dfs(int i ,int j, string ans)
{
    if(i==x.size() && j==y.size())
    {
        s.insert(ans);
        return;
    }
    if(i==x.size() && j!=y.size())
    {
        dfs(i,j+1,ans+y[j]);
    }
    else if(i!=x.size() && j==y.size())
    {
        dfs(i+1,j,ans+x[i]);
    }
    else
    {
        dfs(i+1,j,ans+x[i]);
        dfs(i,j+1,ans+y[j]);
    }
}
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        s.clear();
        cin>>x>>y;
        dfs(0,0,"");
        for(auto i : s)cout<<i<<"\n";
        cout<<"\n";
    }
}