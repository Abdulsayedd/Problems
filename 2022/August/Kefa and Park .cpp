#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
#define what(x) cerr << #x << " is " << x << "\n";
#define mest(x,n) memset(x,n,sizeof x);
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
const int SIZ = 100007;
int n,m,x,y,ans=0;
int cats[SIZ],vis[SIZ];
vector<int>arr[SIZ];
void dfs(int node,int c)
{
    if(cats[node])c++;
    else c=0;
    if(c>m)return ;
    vis[node]=1;
    bool leaf=true;
    for(auto i : arr[node])
    {
        if(!vis[i])
        {
            dfs(i,c);
            leaf=false;
        }
    }
    if(leaf)ans++;
}
signed main (){
    pre;
    cin>>n>>m;
    for(int i = 1 ; i <= n; i ++)
    {
        cin>>cats[i];
    }
    for(int i = 1 ; i<n ; i++)
    {
        cin>>x>>y;
        arr[y].push_back(x);
        arr[x].push_back(y);
    }
    dfs(1,0);
    cout<<ans;
}