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
string x;
int tc;
int memo[SIZ3][SIZ3];
int vis[SIZ3][SIZ3];
vector<int>arr;
int dp(int i,int j)
{
    int &ret=memo[i][j];
    if(i==j)return 1;
    if(i>j)return 0;
    if(vis[i][j]==tc)return ret;
    vis[i][j]=tc;
    if(x[i]==x[j] and abs(i-j)==1)return 1+dp(i,i);
    if(x[i]==x[j])return 2+dp(i+1,j-1);
    int op1=0,op2=0;
    op1=dp(i+1,j);
    op2=dp(i,j-1);
    return ret=max(op1,op2);
}
string ans;
void build(int i,int j)
{

}
signed main (){
    pre;
    tc=1;
    while(cin>>x)
    {
        build(0,x.size()-1);
        cout<<ans<<endl;
        ans.clear();
        tc++;
    }

}