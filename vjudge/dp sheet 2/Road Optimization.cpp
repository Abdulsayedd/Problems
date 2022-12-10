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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7;
int n,l,k,d[507],a[507],memo[507][507];
int dp(int i,int kk)
{
    if(kk<0)return 1e18;
    if(i==n)return 0;
    int &ret=memo[i][kk];
    if(~ret)return ret;
    int op1=dp(i+1,kk)+((d[i+1]-d[i])*a[i]);
    for(int i1=i+2 ; i1<=n ; i1++)
    {
        op1=min(op1,dp(i1,kk-(i1-i-1))+((d[i1]-d[i])*a[i]));
    }
    return ret=op1;
}
signed main (){
    pre;
    memset(memo,-1,sizeof memo);
    cin>>n>>l>>k;
    d[n]=l;
    for(int i = 0 ; i < n ; i++)cin>>d[i];
    for(int i = 0 ; i < n ; i++)cin>>a[i];
    cout<<dp(0,k);
}