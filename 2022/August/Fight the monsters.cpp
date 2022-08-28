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
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
signed main (){
    pre;
    freopen("monsters.in","r",stdin);
    int t;cin>>t;
    while(t--)
    {
            int n,m;cin>>n>>m;
            priority_queue<int,vector<int>,less<int>> v;
            int h;
            for(int i = 0 ; i <n ; i++)
            {
                cin>>h;
                v.push(h);
            }
/*            while(v.size())
            {
                what(v.top());
                v.pop();
            }*/
            while(v.size() && m)
            {
                h=v.top();
                v.pop();
                h>>=1;
                if(!h)m--;
                else v.push(h),m--;
/*                what(h);
                what(v.top());*/
            }
            int c=0;
            while(v.size())
                {
                    c+=v.top();
                    v.pop();
                }
            cout<<c<<"\n";
    }
}