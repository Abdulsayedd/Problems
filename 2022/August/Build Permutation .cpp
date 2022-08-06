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
        ll m;
        unordered_map<int,int>mp;
        vector<int>v;
        if(n==1)cout<<0;
        else
        {
            m=floor(sqrt(n)+1);
            for(int i = n-1 ; i >=0 ; i--)
            {
                for(int j = m ; j>=0; j--)
                {
                    if(j*j-i<n && mp[j*j-i]==0 && j*j-i>=0)
                    {
                        v.push_back(j*j-i);
                        mp[j*j-i]++;
                        break;
                    }
                }
            }
            int tt=0;
            for(auto i : v)
            {
                if(i>=n){tt=1;break;}
            }
            if(tt)cout<<-1;
            else
            {
                reverse(v.begin(),v.end());
                for(auto i : v)cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
}