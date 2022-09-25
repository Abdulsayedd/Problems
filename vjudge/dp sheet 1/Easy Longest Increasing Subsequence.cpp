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
int n;
itn arr[11];
int memo[11][11];
bool vis[11][11];
int dp(int prev,int i)
{
    if(i==n)return 0;
    if(vis[prev][i])return memo[prev][i];
    vis[prev][i]=1;
    int op1=0,op2=0;
    op2=dp(prev,i+1);
    if(arr[prev]<arr[i])op1=dp(i,i+1)+1;
    return memo[prev][i]=max(op1,op2);
}
signed main (){
    pre;
    cin>>n;
    for(int i= 0 ; i < n ; i++)cin>>arr[i];
    int mx=0;
    for(int i = 0 ; i < n ; i++)
    {
        mx=max(mx,dp(i,i+1)+1);
    }
    cout<<mx;
}