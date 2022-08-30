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
        int n;cin>>n;
        string x;cin>>x;
        deque<int>v;
        deque<int>ans;
        int c=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(x[r]=='R')c+=n-1-r,v.push_back(r-(n-r-1));
            else c+=r;

            if(x[l]=='L')c+=l,v.push_back(n-l-1-l);
            else c+=n-l-1;

            l++;r--;
        }
        c+=(n/2)*(n&1);
        for(auto i : v)
        {
            c+=i;
            ans.push_back(c);
        }
        int c1=n;
        for(auto i : ans)cout<<i<<" ",c1--;
        while(c1--)cout<<c<<" ";
        cout<<"\n";
    }
}