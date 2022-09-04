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
bool comp(pair<int,int>a,pair<int,int>b)
{
    if (a.first==b.first)
    {
        return a.second>b.second;
    }
    else
    {
        return a.first>b.first;
    }
}
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,mon;
        cin>>n>>mon;
        map<int,int>mp;
        vector<pair<int,int>>v;
        int req=0;
        for(int i = 0 ; i < n ; i++)
        {
            itn h;cin>>h;
            mp[h]++;
            req+=h;
        }
        if(req<mon){cout<<"Impossible"<<"\n";continue;}
        for(auto i : mp)
        {
            v.push_back({i.first*i.second,i.first});
        }
        sort(v.begin(),v.end(),comp);
        int money=mon;
        set<int>s;
        int i=0;
        while(money>0)
        {
            money-=v[i].first;
            s.insert(v[i].second);
            i++;
        }
        for(auto i : s)cout<<i<<" ";
        cout<<"\n";
    }

}