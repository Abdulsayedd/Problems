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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7,SIZ4=1e4+6,SIZ2=1e2+7;
int n,k;
int taste[SIZ2],cal[SIZ2];
int memo[SIZ2][SIZ5];
int dp(int i ,int sum)
{
    int &ret=memo[i][sum];
    if(i==n)return !sum?0:-1*MOD;
    if(~ret)return ret;
    int op1,op2;
    op1=dp(i+1,sum+taste[i]-(cal[i]*k))+taste[i];
    op2=dp(i+1,sum);
    return ret=max(op1,op2);
}
signed main (){
    pre;
    cin>>n>>k;
    memset(memo,-1,sizeof memo);
    for(int i = 0 ; i < n ; i++)cin>>taste[i];
    for(int i = 0 ; i < n ; i++)cin>>cal[i];
    int c=dp(0,0);
    if(c<1)cout<<-1;
    else cout<<c;
}