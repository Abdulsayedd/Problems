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
const itn pp=30007;
int coin[51];
int memo[SIZ3][SIZ3];
int dp(int i,int money)
{
    if(money==0)return 1;
    if(money<0)return 0;
    if(i==-1)return 0;
    int &ret=memo[i][money];
    if(~ret)return ret;
    int op1=0,op2=0;
    op1=dp(i-1,money);
    op2=dp(i,money-coin[i]);
    return ret=op1+op2;
}
signed main (){
    pre;
    int n,m;cin>>n>>m;
    memset(memo,-1,sizeof memo);
    for(int i = 0 ; i < m ; i++)cin>>coin[i];
    sort(coin,coin+m);
    cout<<dp(m-1,n);
}