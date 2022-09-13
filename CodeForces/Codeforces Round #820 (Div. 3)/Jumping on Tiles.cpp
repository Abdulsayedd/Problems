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
        string x;cin>>x;
        set<char>s;
        vector<int>v[30];
        for(int i = 0 ; i < x .size();i++)s.insert(x[i]);
        for(int i = 1 ; i < x.size()-1;i++)
        {
            v[x[i]-'a'].push_back(i);
        }
        if(s.size()==1)
        {
            cout<<"0 "<<x.size()<<"\n";
            for(int i = 1 ; i <= x.size();i++)cout<<i<<' ';
            cout<<"\n";
            continue;
        }
        int st=x[0]-'a',en=x[x.size()-1]-'a',c=2;
        int mn=min(st,en),mx=max(st,en);
        for(int i = mn;i<=mx;i++)
        {
            c+=(int)v[i].size();//jumpsss
        }
         //what(mx)what(mn)what(c)
        cout<<mx-mn<<" "<<c<<"\n";
        cout<<"1 ";
        vector<int>ans;
        for(int i = mn;i<=mx;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                ans.push_back(v[i][j]+1);
            }
        }
        if(st==mx)reverse(ans.begin(),ans.end());
        for(auto i : ans)cout<<i<<" ";
        cout<<x.size()<<"\n";
    }
}