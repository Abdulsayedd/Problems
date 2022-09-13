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
bool bfs(int node)
{
    if(node==1)return true;
    queue<int>q;
    map<int,bool>mp;
    q.push(1);
    while(q.size()) {
        int cur = q.front();
        q.pop();
        int x1 = cur * 10, x2 = cur * 20;
        if (x1 == node || x2 == node)return true;
        if (x1 < node && !mp.count(x1))mp[x1] = 1, q.push(x1);
        if (x2 < node && !mp.count(x2))mp[x2] = 1, q.push(x2);
    }
    return false;
}
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<(bfs(n)?"YES":"NO")<<"\n";
    }
}