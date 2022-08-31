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
        int k;cin>>k;
        string x;cin>>x;
        string y=x;
        reverse(x.begin(),x.end());
        int n=x.size();
        if(n==1){cout<<0<<"\n";continue;}
        int c=0;
        for(int i = 0 ; i < n ; i++)
        {
            if(y[i]=='L')c+=i;
            else c+=n-1-i;
        }
        vector<int>v;
        for(int i = 0 ; i < n/2 ; i++)
        {
            if(y[i]=='L')
            {
                c+=n-1-i;
                c-=i;
                v.push_back(c);
            }
            if(x[i]=='R')
            {
                c+=n-1-i;
                c-=i;
                v.push_back(c);
            }
        }
        int c1=k;
        for(auto i : v)cout<<i<<" ",c1--;
        while(c1--)cout<<c<<" ";
        cout<<"\n";
    }
}