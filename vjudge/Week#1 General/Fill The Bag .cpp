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
#define whate(x) cerr << #x << " is " << x << "\n";
#define what(x) cerr << #x << " is " << x << ' ';
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        priority_queue<int>q;
        int tot=0,ans=-1;
        for(int i = 0 ; i < m ; i++)
        {
            int h;cin>>h;
            q.push(h);
            tot+=h;
        }
        if(tot>=n)
        {
            ans=0;
            while(true)
            {
                int cur=q.top();
                q.pop();
                if(cur>n)
                {
                    if(tot-cur<n)//qsm
                    {
                        ans++;
                        q.push(cur/2);q.push(cur/2);
                    }
                    else tot-=cur;//tyr
                }
                else n-=cur,tot-=cur;
                if(!n || !tot)break;
            }
        }
        cout<<ans<<"\n";
    }
}