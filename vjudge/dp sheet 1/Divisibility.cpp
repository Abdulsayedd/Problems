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
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7,SIZ4=1e4+6;
int tc,n,k;
int arr[SIZ4];
string ans[]={"Not divisible","Divisible"};
int memo[SIZ4][SIZ3];
int vis[SIZ4][SIZ3];
int dp(int i,int sum)
{
    if(i==n)return sum==0;
    if(vis[i][sum]==tc)return memo[i][sum];
    vis[i][sum]=tc;
    int op1,op2;
    op1=dp(i+1,(((sum+arr[i])%k)+k)%k);
    op2=dp(i+1,(((sum-arr[i])%k)+k)%k);
    return memo[i][sum]=(op1||op2);
}
signed main (){
    pre;
    int t;cin>>t;
    for(tc=1 ; tc<=t ; tc++)
    {
        cin>>n>>k;
        for(int i = 0 ; i < n ; i++)cin>>arr[i];
        cout<<ans[dp(0,0)]<<"\n";
    }
}