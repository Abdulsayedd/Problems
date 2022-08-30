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
const int SIZ = 1007;
int n,m,ans=0,x,y,x2,y2;
string arr[SIZ];
bool vis[SIZ][SIZ];
pair<int,int>p1[]={{1,0},{0,1},{-1,0},{0,-1}};
bool valid(int i,int j){return i>=1&&j>=0&&i<=n&&j<m;}
bool f=false;
void dfs(int i,int j,char ch,int cc)
{
    if(!valid(i,j)|| arr[i][j]!=ch || vis[i][j])return ;
    vis[i][j]=1;
    for(auto k : p1)
    {
        int xd=k.first+i;
        int yd=k.second+j;
        dfs(xd,yd,ch,cc);
    }
}
signed main (){
    pre;
    cin>>n>>m;
    for(int i = 1 ; i <= n ;i ++)
    {
        cin>>arr[i];
    }
    for(int i = 1 ; i <=n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(!vis[i][j])ans++;
            dfs(i,j,arr[i][j],0);
        }
    }
    cout<<ans;
}