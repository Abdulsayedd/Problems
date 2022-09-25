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
itn arr[3][SIZ5];
int memo[3][SIZ5];
bool vis[3][SIZ5];
int dp(int i , int last)
{
    if(i==n)return 0;
    if(last!=3)
    {
        if(vis[last][i])return memo[last][i];
        vis[last][i]=true;
    }
    int ret=0;
    for(int j = 0 ; j <3 ; j++)
    {
        if(j!=last)ret = max( ret , dp(i+1,j) + arr[j][i] );

    }
    return memo[last][i]=ret;
}
signed main (){
    pre;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
        for(int j=0;j<3;j++)
            cin>>arr[j][i];
    cout<<dp(0,3);
}