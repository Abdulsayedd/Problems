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
        int n;cin>>n;
        map<char,vector<int>>mp;
        string x;cin>>x;
        for(int i = 0 ; i<  n ; i++)
        {
                mp[x[i]].push_back(i+1);
        }
       int q;cin>>q;
       vector<int>v;
       map<char,int>mp1;
       while(q--)
       {
           mp1.clear();
           v.clear();
           string y;cin >> y;
           for (auto i: y)mp1[i]++;
           int mx = 0;
           for (auto i: mp1)
           {
               v = mp[i.first];
               mx = max(mx, v[i.second - 1]);
           }
           cout << mx << "\n";
       }


}