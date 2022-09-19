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
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,x,y;cin>>n>>x>>y;
        string a,b;cin>>a>>b;
        vector<int>v;
        for(int i =0;i<n;i++)
        {
            if(a[i]!=b[i])v.push_back(i);
        }
        if(v.size()&1)//odd
        {
            cout<<-1<<"\n";
        }
        else
        {
            if(v.size()!=2)cout<<((v.size()/2)*y)<<"\n";
            else
            {
                int mn=min(2*y,x);
                if(v[0]==(v[1]-1))
                {
                    if(n==2||n==3)cout<<x;
                    else if(n==4)cout<<(v[0]==1?x:mn);
                    else cout<<mn;
                }
                else cout<<y;
                cout<<"\n";
            }
        }
    }
}