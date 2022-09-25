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
int n,m;
char arr[SIZ3][SIZ3];
int memo[SIZ3][SIZ3];
int dp(int i ,int j)
{
    int &ret=memo[i][j];
    if(~ret)return memo[i][j];
    if(i>n || j>m)return 0;
    if(i==n && j==m)return 1;
    if(arr[i][j]=='#')return 0;
    int op1=dp(i+1,j);
    int op2=dp(i,j+1);
    return ret=((op1%MOD)+(op2%MOD))%MOD;
}
signed main (){
    pre;
    memset(memo,-1,sizeof memo);
    cin>>n>>m;
    for(int i = 1 ; i <=n ; i++)
    {
        for(int j =  1 ; j <= m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<dp(1,1);
}