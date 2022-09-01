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
#define what(x) cerr << #x << " is " << x << endl;
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int n,m,q,c;
int arr[100007];
int freq[100007][107];
bool vis[100007][107];
vector<int>adj[100007];
void bfs(int spic)
{
    queue<int>q;
    for(int i = 1 ; i<=n ; i++)// push all spicies
    {
        if(spic==arr[i])
        {
            vis[i][spic]=1;
            freq[i][spic]=0;
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(auto k :adj[cur])
        {
            if(!vis[k][spic])//node and spice
            {
                vis[k][spic]=1;
                q.push(k);
                freq[k][spic]=freq[cur][spic];
                freq[k][spic]++;
            }
            else continue;
        }
    }
}
int main (){
    pre;
    cin>>n>>m>>q;
    for(int i = 1 ; i <= n ; i++)
    {
        cin>>arr[i];
    }
    while(m--)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1;i<=n ;i++)
    {
        for(int j = 1;j<=103;j++)
        {
            freq[i][j]=INT_MAX;
        }
    }
    for(int i =1 ; i <=100 ; i++)
    {
        bfs(i);
    }
    while(q--)
    {
        //memset(vis,0,sizeof vis);
        c=0;
        int plc,spic;cin>>plc>>spic;
        int mn=INT_MAX;
        for(int i = 1 ;i<=spic;i++)mn=min(freq[plc][i],mn);
        cout<<(mn==INT_MAX?-1:mn)<<"\n";
    }
}