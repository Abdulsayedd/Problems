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
string x,y;
int memo[3001][3001];
bool vis[3001][3001];
int dp(int i,int j)
{
    if(i==x.size()||j==y.size())return 0;
    if(vis[i][j])return memo[i][j];
    vis[i][j]=true;
    if(x[i]==y[j]){return memo[i][j]=dp(i+1,j+1)+1;}
    return memo[i][j]=max(dp(i+1,j),dp(i,j+1));
}
string z;
void build(int i,int j)
{
    if(i==x.size()||j==y.size())return ;
    if(x[i]==y[j])
    {
        z+=x[i];
        return build(i+1,j+1);
    }
    if(dp(i+1,j)<dp(i,j+1))return build(i,j+1);
    else return build(i+1,j);
}
signed main (){
    pre;
    cin>>x>>y;
    build(0,0);
    cout<<z;
}