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
int n,arr[S4],memo[15][S5];
string x;
int add(int n1,int n2)
{
    return ((n1%MOD)+(n2%MOD))%MOD;
}
int dp(int i,int sum)
{
    if(i==n)return sum==5;
    int &ret=memo[sum][i];
    if(~ret)return ret;
    int ans=0;
    if(x[i]=='?')
        for(int j= 0 ; j<= 9 ; j++)
            ans=add(dp(i+1,(10*sum+j)%13),ans);
    else
        ans=add(dp(i+1,(10*sum+x[i]-'0')%13),ans);
    return ret=ans%MOD;
}
/*void blt(int i,int j)
{
    if(i>j)return ;
    if(i==j){cout<<x[i];return;}
    if(x[i]==x[j])
    {
        cout<<x[i];blt(i+1,j-1);cout<<x[i];
    }
    else
    {
        if(dp(i,j-1)<dp(i+1,j))
        {
            cout<<x[j];
            blt(i,j-1);
            cout<<x[j];
        }
        else
        {
            cout<<x[i];
            blt(i+1,j);
            cout<<x[i];
        }
    }
}*/
signed main ()
{
    pre;
    memset(memo,-1,sizeof memo);
    cin>>x;
    n=x.size();
    cout<<(dp(0,0)+MOD)%MOD;
}