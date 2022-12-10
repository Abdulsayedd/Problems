#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;using namespace std;
typedef     tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define     pre                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     int                 long long
#define     itn                 long long
#define     ull                 unsigned long long
#define     all(x)              (x).begin(),(x).end()
#define     rall(x)             (x).rbegin(),(x).rend()
#define     fx(x)               fixed<<setprecision(x)
#define     split(x, ch, v)     stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define     lower(x)            for(int i=0;i<x.size();i++)x[i]|=' ';
#define     upper(x)            for(int i=0;i<x.size();i++)x[i]&='_';
#define     what(x)             cout << #x << " is " << x << endl;
#define     arr2d(arr, m, n)    for(int mm=0;mm<m;mm++){for(int nn=0;nn<n;nn++)cout<<arr[mm][nn]<<" ";cout<<'\n';}
#define     PI                  acos(-1)
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7,SIZ6=1e6+7;
signed main (){
    pre;
    int t;cin>>t;
    while(t--)
    {
        int l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;
        if(a>b)swap(a,b);
        int abss=b-a;
        if(a==b)
        {
            cout<<0<<"\n";
            continue;
        }
        if(abss>=x and abss+a<=r)
        {
            cout<<1<<"\n";
            continue;
        }
        int la=a-l;
        if((la>=x and b-l>=x )or r-b>=x)
        {
            cout<<2<<"\n";
            continue;
        }
        if(r-a>=x and r-l>=x and b-l>=x)
        {
            cout<<3<<"\n";
            continue;
        }
        cout<<-1<<"\n";
    }
}