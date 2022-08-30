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
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        vector<int>arr[1007]={};
        int time[1007];
        memset(time,-1,sizeof time);
        int nodes,edges;cin>>nodes>>edges;
        for(int i = 0 ; i < edges ; i++)
        {
            int x,y;
            cin>>x>>y;
            arr[x].push_back(y);
            arr[y].push_back(x);
        }
        int h;cin>>h;
        queue<int>q;
        q.push(h);
        int c=0;
        time[h]=0;
        while(q.size())
        {
            int cur=q.front();
            q.pop();
            for(auto k : arr[cur])
            {
                if(time[k]!=-1)continue;
                q.push(k);
                time[k]=time[cur]+1;
            }
        }
        for(int i = 1 ; i <= nodes ; i++)
        {
            if(i==h)continue;
            cout<<(time[i]==-1?-1:time[i]*6)<<" ";
        }
        cout<<"\n";
    }
}