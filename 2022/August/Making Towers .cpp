#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;vector<ll>v;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int main (){
        pre;
        int t;cin>>t;
        while(t--)
        {
           int n;cin>>n;
           map<int,vector<int>>mp;
            for(int i = 0 ; i < n ; i++)
            {
                int h;cin>>h;
                mp[h].push_back(i+1);
            }
            for(int i = 1 ; i <= n ; i ++)
            {
                if(mp[i].empty())cout<<0<<" ";
                else
                {
                    ll c=0,m=mp[i][0];
                    for(int j = 1 ; j < mp[i].size() ; j++)
                    {
                        if(mp[i][j]%2==m%2)
                        {
                           continue;
                        }
                        else
                        {
                            m=mp[i][j];
                            c++;
                        }
                    }
                    cout<<c+1<<" ";
                }
            }
            cout<<"\n";
        }

}