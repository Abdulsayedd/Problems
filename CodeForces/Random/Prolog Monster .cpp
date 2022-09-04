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
int n,dmg,heal,cur;
queue<int>q;
bool vis[1000007];
int mn=INT_MAX;
void bfs()
{
    if(q.size()==0)return;
    mn=min(mn,q.front());
    cur=q.front();
    q.pop();
    int dmgg=cur-dmg,heall=cur+heal;
    if(dmgg>=0&&!vis[dmgg])
    {
        vis[dmgg]=1;
        q.push(dmgg%n);
    }
    if(heall<=n&&!vis[heall])
    {
        vis[heall]=1;
        q.push(heall%n);
    }
    bfs();
}
int main (){
    pre;
    cin>>n>>dmg>>heal;
    vis[n]=1;
    cur=n;
    q.push(cur);
    bfs();
    cout<<n-mn<<"\n";
}