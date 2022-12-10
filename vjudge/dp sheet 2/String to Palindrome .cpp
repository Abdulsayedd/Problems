#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
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
const int MOD =1e9+7,S6=1e6+7,S5=1e5+7,S4=1e4+7,S3=1e3+7,S2=1e2+7;
int n,y[S6],memo[2*S3][2*S3],vis[2*S3][2*S3],t,tc;
string x;
int dp(int i,int j)
{
    if(i>=j or i==x.size() or j==-1)return 0;
    if(vis[i][j]==tc)return memo[i][j];
    vis[i][j]=tc;
    int op1,op2,op3;op1=op2=op3=1e12;
    if(x[i]==x[j])op1=dp(i+1,j-1);
    else op1=dp(i+1,j-1)+1,op2=dp(i+1,j)+1,op3=dp(i,j-1)+1;
    return memo[i][j]=min({op1,op2,op3});
}
signed main ()
{
    pre;
    cin>>t;
    for(tc=1 ; tc<=t ; tc++)
    {
        cin>>x;
        cout<<"Case "<<tc<<": "<<dp(0,x.size()-1)<<"\n";
    }
}