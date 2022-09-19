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
    for(int i1 = 1 ; i1 <= t ; i1++)
    {
        int n,ltr;cin>>n>>ltr;
        vector<int>arr[n+7];
        vector<int>vis(n+1,0);
        arr[0].push_back(1);
        for(int i = 0 ; i < n-1 ; i++)
        {
            int x,y;
            cin>>x>>y;
            arr[x].push_back(y);
            arr[y].push_back(x);
        }
        for(int i = 0 ; i < ltr;i++)
        {
            int h;cin>>h;
        }
        queue<int>q;
        q.push(0);
        int lvl=0;
        vector<int>arr1[n+7];
        while(!q.empty())
        {
            int cur ;
            while (!q.empty())
            {
                cur=q.front();
                q.pop();
                for (auto i: arr[cur])
                {
                    if(!vis[i])
                    {
                        arr1[lvl].push_back(i);
                        vis[i]=1;
                    }
                }
            }
            lvl++;
            for(auto i : arr1[lvl-1])
            {
                q.push(i);
            }
        }
        int ans{};
        for(int i = 0 ; i < n ;i++)
        {
            if(ltr>=arr1[i].size())
            {
                ltr-=arr1[i].size();
                ans+=arr1[i].size();
            }
            else break;
        }
        cout<<"Case #"<<i1<<": "<<ans<<"\n";
    }
}